#include <MPU6050_tockn.h>
#include <MPU6050_tockn69.h>
#include <Wire.h>
#include <Servo.h>

MPU605069 mpu60502(Wire);
MPU6050 mpu6050(Wire);

void setup() {
  Serial.begin(115200);
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
  mpu60502.begin();
  mpu60502.calcGyroOffsets(true);
}

void loop() {
  mpu6050.update();
  Serial.print("angleX : ");
  Serial.print(mpu6050.getAngleX());
  Serial.print("\tangleY : ");
  Serial.print(mpu6050.getAngleY());
  Serial.print("\tangleZ : ");
  Serial.print(mpu6050.getAngleZ());

  mpu60502.update();
  Serial.print(" angleX : ");
  Serial.print(mpu60502.getAngleX());
  Serial.print("\tangleY : ");
  Serial.print(mpu60502.getAngleY());
  Serial.print("\tangleZ : ");
  Serial.println(mpu60502.getAngleZ());
}
