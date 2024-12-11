#include "software_timer.h"

int timer_counter = 0;
int timer_flag = 0;
int timer_cycle = 10;

void setTimer0(int duration){
	timer_counter = duration / timer_cycle;
	timer_flag = 0;
}

void timer_run(){
	if(timer_counter > 0){
		timer_counter--;
		if(timer_counter <= 0){
			timer_flag = 1;
		}
	}
}

