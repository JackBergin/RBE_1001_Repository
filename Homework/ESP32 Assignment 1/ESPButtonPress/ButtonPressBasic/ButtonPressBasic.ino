/*
Example sketch 05
PUSH BUTTONS Use pushbuttons for digital input
*/

const int buttonPin = 26;
const int ledPin = 13;    
int counter = 0;
bool verifiedTime;

void setup()
{
  // Set up the pushbutton pins to be an input:
  pinMode(buttonPin, INPUT);

  // Set up the RGB pins to be outputs:
  pinMode(ledPin, OUTPUT);  
}
void loop()
{
  
  // local variable to hold the pushbutton states
  //read the digital state of buttonPin with digitalRead() function and store the value in buttonState variable
  int buttonState = digitalRead(buttonPin);
  //if the button is pressed increment counter and wait a tiny bit to give us some time to release the button
  if (buttonState == LOW) // light the LED
  {
     counter++;
     delay(250); //change the delay and change the sensitivity of the momentary contact switch
     verifiedTime = true;
  }
  //*****************************************************************************************
  //This is where the editing of the code begins to reverse and create a time press reaction.
  //*****************************************************************************************
  
  //normalBasicCode();
  //reverseBasicCode();
  //timeHoldCode();



  if(verifiedTime == true)
  {
     digitalWrite(ledPin,HIGH);
     
  }
  else if(verifiedTime == false)
  {
     digitalWrite(ledPin,LOW);
  }
  else{
    verifiedTime = false;
  }
  
  
}


void normalBasicCode()
{
  //Normal code:
  //use the if satement to check the value of counter. If counter is equal to 0 all pins are off
  if(counter == 0)
  {
     digitalWrite(ledPin,LOW);
  }
  //else if counter is equal to 1, redPin is HIGH
  else if(counter == 1)
  {
     digitalWrite(ledPin,HIGH);
  }
  else
  {
   counter = 0;
  }
}


void reverseBasicCode()
{
      //Reverse: 
   //use the if satement to check the value of counter. If counter is equal to 0 all pins are off
   if(counter == 0)
   {
      digitalWrite(ledPin,HIGH);
   }
   //else if counter is equal to 1, redPin is HIGH
   else if(counter == 1)
   {
      digitalWrite(ledPin,LOW);
   }
   else
   {
      counter = 0;
   }
}


void timeHoldCode()
{
   //Time hold:
   //New controll loop to go with the time
}
