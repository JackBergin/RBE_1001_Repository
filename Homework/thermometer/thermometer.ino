//include the servo library
#include <ESP32Servo.h>
//create a servo object called servo1
Servo servo1;  
//analog input pin constant
const int tempPin = 27;
//raw reading variable
int tempVal;
//voltage variable
float volts;
//final temperature variables
float tempC;
float tempF;

void setup()
{
  //attach servo1 to pin 9 on the ESP32 
  servo1.attach(14);
  
  // start the serial port at 115200 baud
  Serial.begin(9600);
  //115200 is the “baud rate,” or communications speed. 
  //When two devices are communicating with each other, 
  //both must be set to the same speed.
}
void loop()
{
    //read the temp sensor and store it in tempVal
    tempVal = analogRead(tempPin);
   
    //print out the 10 value from analogRead
    Serial.print("ADC Value: ");
    Serial.println(tempVal);
    //print a spacer
    Serial.println(" **** ");
    
    //converting that reading to voltage by multiplying the reading by 3.3V (voltage of the ESP32 board)
    volts = (tempVal)/1023.0;
    
    //calculate temperature celsius from voltage equation found on the sensor spec.
    tempC = round((volts - 0.5) * 100);

    // print the celcius temperature over the serial port
    Serial.print(" degrees C: ");
    Serial.println(tempC);
    Serial.println(" **** ");

    //This series of if statements should be able to read 20-35 degrees celsius and turn the servo accordingly
    if (19.5 <= tempC && tempC < 20.5) {servo(12);}
    if (20.5 <= tempC && tempC < 21.5) {servo(24);}
    if (21.5 <= tempC && tempC < 22.5) {servo(36);}
    if (22.5 <= tempC && tempC < 23.5) {servo(48);}
    if (23.5 <= tempC && tempC < 24.5) {servo(60);}
    if (24.5 <= tempC && tempC < 25.5) {servo(72);}
    if (25.5 <= tempC && tempC < 26.5) {servo(84);}
    if (26.5 <= tempC && tempC < 27.5) {servo(96);}
    if (27.5 <= tempC && tempC < 28.5) {servo(108);}
    if (28.5 <= tempC && tempC < 29.5) {servo(120);}
    if (29.5 <= tempC && tempC < 30.5) {servo(132);}
    if (30.5 <= tempC && tempC < 31.5) {servo(144);}
    if (31.5 <= tempC && tempC < 32.5) {servo(156);}
    if (32.5 <= tempC && tempC < 33.5) {servo(168);}
    if (33.5 <= tempC && tempC < 34.5) {servo(170);}
    if (34.5 <= tempC && tempC < 35.5) {servo(170);}
}
void servo (int degreeTurn)
{
        servo1.write(degreeTurn); 
        Serial.print("Degrees of Servo: ");
        Serial.println(degreeTurn);
        Serial.println(" **** ");
        delay(1000);
}
