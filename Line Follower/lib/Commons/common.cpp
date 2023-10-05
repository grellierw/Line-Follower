#include <common.h>



//Functions

void portSetup(){
    //Right Motor
    pinMode(motorRight1, OUTPUT);
    pinMode(motorRight2, OUTPUT);
    pinMode(motorRightA, OUTPUT);
    //Left Motor
    pinMode(motorLeft3, OUTPUT);
    pinMode(motorLeft4, OUTPUT);
    pinMode(motorLeftB, OUTPUT);
    
    //Sensors
    


    //Misc
    pinMode(LED_BUILTIN, OUTPUT);



}