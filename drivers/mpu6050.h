#ifndef _MPU6050_H
#define _MPU6050_H

#include "conf.h"

//-------- variables ----------------------------
extern int16_t gyro_x,gyro_y,gyro_z;
extern int16_t acc_x,acc_y,acc_z;
extern float gyro_x_rate,gyro_y_rate,gyro_z_rate;
extern float acc_x_angle,acc_y_angle;
extern float acc_x_temp,acc_y_temp,acc_z_temp;
extern float z_angle;
extern float dt,temp;
extern uint8_t test,i2c_sdata[20],i2c_rdata[20];
//-----------------------------------------------


//-------------- functions ----------------------
void MPU6050_WriteBlock(uint8_t adr, uint8_t data[], uint8_t data_len);
void MPU6050_ReadBlock(uint8_t adr, uint8_t data[], uint8_t data_len);
void MPU6050_Init(void);
void MPU6050_Read(void);
void MPU_GetGyroRate(void);
void MPU_GetAccValue(void);
//void get_acce_angle(void);
//-----------------------------------------------
#endif
