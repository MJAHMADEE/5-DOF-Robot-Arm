#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 3; 
// Create a servo object 
Servo Servo1; 
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;
//Servo Servo6;     
void setup()

{
// We need to attach the servo to the used pin number

Serial.begin(9600);
Servo1.attach(servoPin); 
Servo2.attach(4);
Servo3.attach(5);
Servo4.attach(6);
Servo5.attach(7);
   
//delay(3000);

//Serial.println(150);
//Servo1.write(180); 
//delay(10000);

Serial.println("reset");
delay(2000);

Servo1.write(150);
Serial.println("servo1 150");
delay(5000);
 
Servo2.write(80);
delay(1500);

Serial.println("servo2 100");
Servo3.write(90);
delay(1500);
 
Servo4.write(10);
Serial.println("servo1 150");
delay(1500);
 
Servo4.write(50);
Serial.println("servo1 150");
delay(1500);

Serial.println("servo1 150");
delay(1500);

//Servo4.write(0);
Serial.println("servo1 150");
 
Servo3.write(40);
Serial.println("servo1 150");
delay(1500);

Servo2.write(150);
Serial.println("servo2 150");
delay(2000); 
Serial.println(180);
 
Servo1.write(80);
Serial.println("servo1 80");
delay(5000);
 
//Serial.println(80);

Servo2.write(100);
Serial.println("servo2 100");
delay(1500);

Servo3.write(90);
Serial.println("servo1 150");

//delay(3000);
delay(1500);

Servo4.write(10);
Serial.println("servo1 150");
delay(1500);
 
Servo4.write(50);
Serial.println("servo1 150");
delay(1500);
 
Servo3.write(40);
Serial.println("servo1 150");
delay(1500);
 
Servo2.write(150);
Serial.println("servo2 150");
delay(1500);

// Servo4.write(90);
//Serial.println("servo1 150");
//delay(6000);
//Servo4.write(0);
 
//Servo4.write(0);
//Serial.println("servo1 150");
//delay(3000);
//Servo4.write(30);
  
//Servo6.attach(8);
//Servo3.write(40);
//delay(2000);
 
//delay(5000); 
// Servo3.write(60);

}

void loop()

{ 

// Make servo go to 0 degrees 
//Serial.println("reset");
//delay(2000);

Servo1.write(150);
Serial.println("servo1 150");
delay(5000); 

Servo2.write(80);
delay(1500);

Serial.println("servo2 100");
Servo3.write(90);
delay(1500);

Servo4.write(10);
Serial.println("servo1 150");
delay(1500);

Servo4.write(50);
Serial.println("servo1 150");
delay(1500);

Serial.println("servo1 150");
delay(1500);

// Servo4.write(0);
Serial.println("servo1 150");
 
Servo3.write(40);
Serial.println("servo1 150");
delay(1500); 

Servo2.write(150);
Serial.println("servo2 150");
delay(2000); 
Serial.println(180);
 
Servo1.write(80);
Serial.println("servo1 80");
delay(5000);

//Serial.println(80);

Servo2.write(100);
Serial.println("servo2 100");
delay(1500); 

Servo3.write(90);
Serial.println("servo1 150");

//delay(3000);
delay(1500);

Servo4.write(10);
Serial.println("servo1 150");
delay(1500);

Servo4.write(50);
Serial.println("servo1 150");
delay(1500);

Servo3.write(40);
Serial.println("servo1 150");
delay(1500);

Servo2.write(150);
Serial.println("servo2 150");
delay(1500);
 
}
