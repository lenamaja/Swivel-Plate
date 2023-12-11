/* Pushbutton test code 

When the push button is pressed once, counter will increment by 40 
each time.

Used to verify push button operation and will be implemented in Swivel code.

Modified Dec 11, 2023
By Lena Pimlott
*/


const int Pushbutton = 2;  // the number of the pushbutton pin
int counter = 0;
int PBState = 0;  // variable for reading the pushbutton status

void setup() {

  // initialize the pushbutton pin as an input:
  Serial.begin(9600);
  pinMode(Pushbutton, INPUT);
}

void loop() {
  
  PBState = digitalRead(Pushbutton);        // read the state of the pushbutton value:

  if (PBState == HIGH) {                    // check if the pushbutton is pressed
    for (int i = 0; i <= 40; i++){          //counter will count by 40 every time button is pressed
      Serial.println(counter);              //display counter value on serial monitor
      delay(1000);
      counter++;
    }
    
  } 
}
