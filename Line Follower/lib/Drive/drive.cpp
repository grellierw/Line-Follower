#include <Drive.h>


void setDriveLeft(int power){
    if(power > 0){
        digitalWrite(motorLeft3, HIGH);
        digitalWrite(motorLeft4, LOW);
        analogWrite(motorLeftB, power);
    }
    else if(power < 0){
        digitalWrite(motorLeft3, LOW);
        digitalWrite(motorLeft4, HIGH);
        analogWrite(motorLeftB, power);    }
    else{
        digitalWrite(motorLeft3, LOW);
        digitalWrite(motorLeft4, LOW);
        analogWrite(motorLeftB, 0);
    }
}


void setDriveRight(int power){
    if(power > 0){
        digitalWrite(motorRight1, HIGH);
        digitalWrite(motorRight2, LOW);
        analogWrite(motorRightA, power);
    }
    else if(power < 0){
        digitalWrite(motorRight1, LOW);
        digitalWrite(motorRight2, HIGH);
        analogWrite(motorRightA, power);

    }
    else{
        digitalWrite(motorRight1, LOW);
        digitalWrite(motorRight2, LOW);
        analogWrite(motorRightA, 0);
    }
}


void setTurn(int turn){
    setDriveRight(-turn);
    setDriveLeft(turn);
}
