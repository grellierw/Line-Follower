#include <main.h>


// put function declarations here:
//int myFunction(int, int);

//Pin Definitions



void leftMotor(int direction, int speed);

void setup() {
  Serial.begin(9600);
  portSetup();

}

void loop() {
  //Serial.print("sensor =");
  //Serial.println(analogRead(IR_L1));
  
  digitalWrite(LED_BUILTIN, LOW); 
  leftMotor(100);
  delay(5000);

  leftMotor(-100);
  delay(5000)

  digitalWrite(LED_BUILTIN, HIGH);
  setTurn(100);
  delay(5000);

   
     

      



}
