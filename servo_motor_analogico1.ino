#include "Servo.h"
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;


int potenciometro1=0;
int potenciometro2=0;
int potenciometro3=0;
int potenciometro4=0;


int angservo1=0;
int angservoantigo1=0;
int angservo2=0;
int angservoantigo2=0;
int angservo3=0;
int angservoantigo3=0;
int angservo4=0;
int angservoantigo4=0;


const int SV1=A0;
const int SV2=A1;
const int SV3=A2; 
const int SV4=A3;

void setup()
{
   Serial.begin(9600);
   servo1.attach(10); 
   servo2.attach(11);
   servo3.attach(12); 
   servo4.attach(13);
}

void loop()
{
 potenciometro1=analogRead(SV1);
 angservo1=map(potenciometro1, 0, 1023, 0, 180);
  delay(500);
  servo4.write(angservo1);
  	if (angservo1 != angservoantigo1) {
  Serial.println("braco 1 mudou seu angulo");
    angservoantigo1 = angservo1;
	}
  
  
 potenciometro2=analogRead(SV2);
  angservo2=map(potenciometro2, 0, 1023, 0, 90);
  delay(500);
  servo3.write(angservo2);
	if (angservo2 != angservoantigo2) {
  Serial.println("braco 2 mudou seu angulo");
    angservoantigo2 = angservo2;
	}
  
  potenciometro3=analogRead(SV3);
  angservo3=map(potenciometro3, 0, 1023, 0, 120);
  delay(500);
  servo2.write(angservo3);
	if (angservo3 != angservoantigo3) {
  Serial.println("braco 3 mudou seu angulo");
    angservoantigo3 = angservo3;
	}
  
  potenciometro4=analogRead(SV4);
  angservo4=map(potenciometro4, 0, 1023, 0, 90);
  delay(500);
  servo1.write(angservo4);
	if (angservo4 != angservoantigo4) {
  Serial.println("braco 4 mudou seu angulo");
    angservoantigo4 = angservo4;
	}
  
}