/* Swivel Plate Stepper Motor Code

Controls the stepper motor turing the swivel plate that our
robotic arm will pick objects off of.

Modified Dec 5, 2023
By Lena Pimlott
*/

const int Step = 5;                  //Define step pin as pin 5 on Arduino Uno 
const int Direction = 6;             //Define direction pin as pin 6 on Aduino Uno
const int Pushbutton = 2;            //Define pushbutton as pin 2 on Arduino Uno
int PBstate = 0;                     //variable for reading state of pushbutton 

void setup() {
  // put your setup code here, to run once:

  pinMode(Step, OUTPUT);             //define step pin as output
  pinMode(Direction, OUTPUT);        //define direction pin as output
  pinMode(Pushbutton, INPUT);        //define push button as input

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Direction, HIGH);     //Spins the motor in a particular direction

  if(Pushbutton == HIGH){            //check if pushbtton is pressed
  
    for(int x = 0; x < 200; x++){    //the motor will turn by 200 steps
      digitalWrite(Step, HIGH);
      delayMicroseconds(500);
      digitalWrite(Step, LOW);
      delayMicroseconds(500);
    }

  }
}
