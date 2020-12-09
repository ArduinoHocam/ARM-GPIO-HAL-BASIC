/*****************************************************************************************
 * @file     GPIO_HAL.c
 *
 * ARDUINO HOCAM 
 *           
 *
 ****************************************************************************************/

#include <TM4C123.h>
#include "GPIO_HAL.h"

/* ================================================================================ */
/* ================                      GPIO_Init                 ================ */
/* ================================================================================ */

void GPIO_Init(int port)
{
 switch (port)
  {
    case 0:
        SYSCTL->RCGCGPIO |= 0x01;       /* PA    */
        break;
    case 1:
        SYSCTL->RCGCGPIO |= 0x02;       /* PB    */
        break;
    case 2:
        SYSCTL->RCGCGPIO |= 0x04;       /* PC    */
        break;
    case 3:
        SYSCTL->RCGCGPIO |= 0x08;       /* PD    */
        break;
    case 4:
        SYSCTL->RCGCGPIO |= 0x10;       /* PE    */
        break;
    case 5:
        SYSCTL->RCGCGPIO |= 0x20;       /* PF    */
        break;
  }   

}

const int gpio_mask[] = { 1<<0UL, 1<<1UL, 1<<2UL, 1<<3UL, 1<<4UL, 1<<5UL, 1<<6UL, 1<<7UL};
/* ================================================================================ */
/* ================                      pinMode_F                 ================ */
/* ================================================================================ */

void pinMode_F(uint16_t pin, uint16_t state)
{
    if(state)
    {
        GPIOF->DIR  |= gpio_mask[pin];
    }
    else
    {
        GPIOF->DIR  &= ~gpio_mask[pin];
    }
    GPIOF->DEN        |= gpio_mask[1]; 
}

/* ================================================================================ */
/* ================                      digitalWrite_F            ================ */
/* ================================================================================ */

void digitalWrite_F(uint16_t pin, uint16_t state)
{

    if(state)
    {
        GPIOF->DATA |=  gpio_mask[pin];
    }
    else
    {
        GPIOF->DATA   &= ~gpio_mask[pin];

    }
     
}