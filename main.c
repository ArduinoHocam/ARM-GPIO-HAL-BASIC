/*****************************************************************************************
 * @file     main.c
 *
 * ARDUINO HOCAM 
 *           
 *
 ****************************************************************************************/
#include <stdio.h>
#include "TM4C123.h"
void delayms(int time);

void delayms(int time)
{
	int x, y;
	for(x=0;x<time;x++)
	{
		for(y=0;y<7900;y++)
		{
		}
	}
}


int main()
{
	while(1)
	{
		GPIO_Init(5);
		pinMode_F(1, 1);
		digitalWrite_F(1, 1);
		delayms(100);
		digitalWrite_F(1, 0);
		delayms(100);
	}
	return 0;
}

