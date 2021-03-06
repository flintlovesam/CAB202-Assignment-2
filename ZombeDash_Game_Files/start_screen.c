/*
 * start_screen.c
 *
 *  Created on: 8 May 2015
 *      Author: Jai Spicer
 */

#include <util/delay.h>

#include "start_screen.h"
#include "friendly_ports.h"

void setup_start_screen() { // Write the different strings at the correct locations on the screen
	clear();
	draw_string("ZombieDash",15,0);
	draw_string("Teensy Edition",7,9);
	draw_string("n9378880",19,27);
	draw_string("Jai Spicer",15,36);
	refresh();
	random_seed();
	wait_until( pressed( SW1 ) );
	wait_until( !pressed( SW1 ) );

	game_countdown();
	refresh();
}

void game_countdown() {
	clear();
	int timer = 3;
//	while ( timer > 0) {

		draw_string( "3", 40, 22 );
		turn_on(LED0);
		turn_on(LED1);
		turn_on(LED2);
		refresh();
		_delay_ms(1000);
		turn_off(LED0);
		turn_off(LED1);
		turn_off(LED2);
		clear();
		draw_string( "2", 40, 22 );
		turn_on(LED0);
		turn_on(LED1);
		refresh();
		_delay_ms(1000);
		turn_off(LED0);
		turn_off(LED1);
		clear();
		draw_string( "1", 40, 22 );
		turn_on(LED1);
		refresh();
		_delay_ms(1000);
		turn_off(LED0);
		turn_off(LED1);
		clear();

//	}
	clear();

}
