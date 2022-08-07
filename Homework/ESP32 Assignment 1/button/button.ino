const int buttonPin = 26;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
int counter = 1;

void setup() 
{
  pinMode(ledPin, OUTPUT);        // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT);      // initialize the pushbutton pin as an input:
}

void loop()
{
  // read the state of the pushbutton value:
  //int buttonState = digitalRead(buttonPin);

 int buttonState = digitalRead(buttonPin);
  
  //If the button is pressed
  if (buttonState == LOW) 
  {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);
    //waits for 1 second times the counter
    delay(1000*counter);  
    //Turns omn for one second hence the delay(1000)
    digitalWrite(ledPin, LOW);
    delay(1000); 
    //Interates the counter to make the led on for a longer period
    counter++;
  } 
  else 
  {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
    //sets the counter back to one
    counter = 1;
  }
  
}
