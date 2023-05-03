# Two-MPU6050-to-one-Arduino-UNO
Libraries for connect two IMU MPU6050 to one Arduino UNO.
Copy the two folders (MPU6050_tockn and MPU6050_tockn69) into the Arduino folder libraries.
Find code in the twoMPUexample.ino
The MPU605069 is managed by the MPU6050_tockn69.h library inside of whom the address is changed from 0x68 to 0x69.
The MPU6050 is managed by the MPU6050_tockn.h library inside of whom the address is at default 0x68.
