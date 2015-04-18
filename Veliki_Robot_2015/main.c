#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include "system.h"
#include "odometry.h"
#include "can.h"
#include "usart.h"
#include "sides.h"

char releaseCarpets(void)
{
	_delay_ms(3500);
	servo_position(180);
	
	return 0;
}

int main(void)
{
	systemInit();
	
	while(1)
		{
			moveOnDirection(-228, 90, NULL);
			_delay_ms(500);
			rotate(78,60,NULL);
			_delay_ms(1000);
			moveOnDirection(-700, 40, releaseCarpets);
			rotate(-78, 40, NULL);
			moveOnDirection(-40, 65, NULL);
		

			_delay_ms(5000);
			while (1);
			
		}
}
