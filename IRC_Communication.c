IRC Communication:
#define LED 14
#define RLED RED_LED


int analogPin = 6;                    // This specifies pin 6 as being the analogRead pin
const int buttonPin = PUSH2; // sets the PUSH2 button as button pin

int val = 0;                               // variable to store the value read
int buttonState = 0;                  // variable that stores whether the button is pressed or not

void setup()
{
  // setup serial monitor communication rate
  Serial.begin(9600);   
  
  // initialize the digital pins as an output
  pinMode(LED, OUTPUT);              
  pinMode(RLED, OUTPUT);  
  
  // initialize the button pin as INPUT_PULLUP  
  pinMode(buttonPin, INPUT_PULLUP);     
}
void loop()
{
  // analogRead will measure the voltage present on pin 6
  val = analogRead(analogPin); 
  Serial.println(val); // this should print the integer value in the serial monitor
  
  buttonState = digitalRead(buttonPin);
  // checks if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == LOW) 
  {     
    // turn LED on:    
    digitalWrite(RLED, HIGH);  
  } 
  else 
  {
    // turn LED off:
    digitalWrite(RLED, LOW); 
  }
  
  if (val >= 200) //checks if val is greater than or equal to 200
  {
        // turn LED on:
    digitalWrite(LED, HIGH);
  }
  else           //if val is less than 200
  {
       // turn LED off:
    digitalWrite(LED, LOW);
  }    
}
