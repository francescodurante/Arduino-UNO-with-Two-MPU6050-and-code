# Two-MPU6050-to-one-Arduino-UNO
Library for connect two IMU MPU6050 to one Arduino UNO
Copy the two libraries into te Arduino folder libraries. Put the following lines into the Arduino code.

#include <MPU6050_tockn.h>
#include <MPU6050_tockn69.h>
#include <Wire.h>

MPU605069 mpu60502(Wire);
MPU6050 mpu6050(Wire);

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
  mpu60502.begin();
  mpu60502.calcGyroOffsets(true);
  
  }
  
  void loop() {
  mpu6050.update();
  mpu60502.update();
   
  Serial.print(mpu6050.getAngleZ());                       //rotazione spalla
  Serial.print(',');
  Serial.print(mpu6050.getAngleX()-mpu60502.getAngleX());  //flessione gomito
  Serial.print(',');
  Serial.println(mpu60502.getAngleX());                    //flessione spalla
  delay(50);

}
