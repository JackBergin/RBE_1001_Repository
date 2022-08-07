
/*
 * Name: Jack, Kersten, Jake
 * Date: February 24, 2020
 * Program: Home Alarm Part II
 * Important information:
 * ADC Value (LED on): 3120
 * ADC Value (LED off): 3310
 * ADC Threshold Value: 4095
 * 
 * READ ME!!!!!!!!
 * Because we did not get this checked off with a 
 * TA we made a Youtube video prior to the submission 
 * deadline to prove our program and circuit works and 
 * that it was done on time.
 * 
 * Youtube Video Link: https://www.youtube.com/watch?v=FMyG9ov5ryM 
 */

//include the servo library
#include <ESP32Servo.h>
#include <ESP32Wifi.h>
//create a servo object called servo1
Servo servo1;  

//define the states in easy-to-read terms
enum {ALARM_OFF, ALARM_ARMED, ALARM_INTRUDER};
int currentState = ALARM_OFF; //start off with the alarm deactivated

//Some pin definitions:
const int buttonArmingPin = 32;
const int buttonDisarmingPin = 33;
const int photoPin  = 27;
const int piezoPin  = 26;
const int ledPin    = 14;
const int servoPin  = 25;

void setup(void) 
{
  Serial.begin(115200);
  Serial.println("Hello!");
  servo1.attach(25);
  pinMode(buttonArmingPin, INPUT_PULLUP); //if we use INPUT_PULLUP, we don't have to have an external pullup resistor
  pinMode(buttonDisarmingPin, INPUT_PULLUP); //if we use INPUT_PULLUP, we don't have to have an external pullup resistor
  pinMode(photoPin, INPUT);
  pinMode(piezoPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  //pinMode(servoPin, OUTPUT);
  delay(500);
  Serial.println("setup() complete");
}
void loop(void)
/*
 * Our loop() is just a set of checker-handler pairs.
 */
{
  if(CheckArmingButton()) HandleArmingButton();
  if(CheckIfLaserBroken()) HandleLaserBroken();
  if(CheckDisarmingButton()) HandleDisarmingButton();
}

//GOOD
void HandleArmingButton(void)
{
  if(currentState == ALARM_OFF)
  {
    Serial.println("Arming!");

    //take action: light the LED
    digitalWrite(ledPin, HIGH);    

    servo1.write(45); 
    delay(250);
    Serial.println("SERVO GOES");
    
    currentState = ALARM_ARMED; //Don't forget to change the state!
  }
}

//CHECK
void HandleLaserBroken(void)
{
  if(currentState == ALARM_ARMED)
  {
    Serial.println("Armed");
    if (CheckIfLaserBroken() == true)
    {
       tone(piezoPin, 250, 1000);
    }
   }
}

//CHECK
void HandleDisarmingButton(void)
{
  if(currentState == ALARM_ARMED)
  {
    Serial.println("Disarming!");

    //take action: light the LED
    digitalWrite(ledPin, LOW);    

    servo1.write(90); 
    delay(250);
    Serial.println("SERVO GOES BACK");

    currentState = ALARM_OFF; //Don't forget to change the state!
  }
}

//GOOD
bool CheckArmingButton(void)
{
  static int prevButtonState = HIGH; //button up => pin reads HIGH

  bool retVal = false;
  
  int currButtonState = digitalRead(buttonArmingPin);
  if(prevButtonState != currButtonState)
  {
    delay(10); //this is a cheat for debouncing -- the only place delay is allowed!
    if(currButtonState == LOW) retVal = true;  //button is down => pin reads LOW
  }
  prevButtonState = currButtonState;

  return retVal;
}

//GOOD

bool CheckIfLaserBroken(void)
{
  bool retVal = false;
  
  Serial.println(analogRead(photoPin));
  if(analogRead(photoPin) > 3400)
  {
     retVal = true;
  }
  return retVal;
}

//CHECK
bool CheckDisarmingButton(void) 
{
  static int prevButtonState = HIGH; //button up pin reads HIGH
  
  bool retVal = false;
  
  int currButtonState = digitalRead(buttonDisarmingPin);
  if(prevButtonState != currButtonState)
  {
    delay(10); //this is a cheat for debouncing -- the only place delay is allowed!
    if(currButtonState == LOW) retVal = true;  //button is down => pin reads LOW
  }
  prevButtonState = currButtonState;

  return retVal;
}
