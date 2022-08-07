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
    volts = tempVal * 3.3;
    volts /= 1023.0;
    
    //print out the raw voltage over the serial port
    Serial.print("Volts: ");
    Serial.println(volts, 3);
    //print out divider
    Serial.println(" **** ");
    
    //calculate temperature celsius from voltage equation found on the sensor spec.
    tempC = (volts - 0.5) * 100 ;
    
    // print the celcius temperature over the serial port
    Serial.print(" degrees C: ");
    Serial.println(tempC);
    Serial.println(" **** ");
    delay(1000);

    //This will be the first temperature
    int desiredTemp = 21;
    //This will be the first position
    int positon = 12;

    //It the temperature is at the starting 20 
    //degrees C then it will execute the 12 degree 
    //turn  on the servo
    if (tempC == desiredTemp && tempC < 35)
    {
        //Servo goes to the position from the below if statement loop
        servo1.write(positon); 
        //250 millisecond delay  
        delay(250);
        //Resets the desired temp and position to run again
        desiredTemp = 20;
        positon = 12;
    }
    //If it is not then the desired tempature and 
    //position will add an aditional 1 degree C and 12 
    //degrees until they are equal to the actual temperature  
    else
    {
         desiredTemp++;
         positon += 12;
    }
  
}
