 //declare a pin to use for the ADC
const int adcPin = 26;

void setup() 
{
  pinMode(adcPin, INPUT);

  //this sets up the ESP32 to communicate with the Serial Monitor or console on your computer
  //115200 is the buad rate: bits per second
  Serial.begin(115200);
}

void loop() 
{
  //read the ADC
  int adcValue = analogRead(adcPin);

  //EDIT THE NEXT LINE TO CALCULATE THE VOLTAGE
  float adcVoltage = adcValue * 3.3;
  adcVoltage /= 1023.0;

  Serial.print(adcValue);
  Serial.print('\t'); //TAB character

  Serial.print(adcVoltage);
  Serial.print('\t'); //TAB character

  if (adcValue >= 1800)
  {
    Serial.print ("DARK");
    Serial.print('\t'); //TAB character
    Serial.print('\n'); //newline
  }
  else
  {
     Serial.print("LIGHT");
     Serial.print('\t'); //TAB character
     Serial.print('\n'); //newline
  }

  delay(250);
}
