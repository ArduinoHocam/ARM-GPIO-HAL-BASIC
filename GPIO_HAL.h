/*****************************************************************************************
 * @file     GPIO_HAL.h
 *
 * ARDUINO HOCAM 
 *           
 *
 ****************************************************************************************/

#ifndef GPIO_HAL_H
#define GPIO_HAL_H

extern void GPIO_Init(int port);

extern void pinMode_F(uint16_t pin, uint16_t state);

extern void digitalWrite_F(uint16_t pin, uint16_t state);


#endif