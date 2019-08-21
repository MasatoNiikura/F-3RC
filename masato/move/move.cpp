/*
 * move.cpp
 *
 *  Created on: 2019/08/16
 *      Author: masato
 */

#include "move.h"
#include "cmath"

move::move() {
	// TODO Auto-generated constructor stub

}

move::~move() {
	// TODO Auto-generated destructor stub
}

void move::goposition(float goal_x, float goal_y){
	float now_x = loca.GetX();
	float now_y = loca.GetY();
	float now_a = loca.GetYaw();

	PID_X.pid(now_x, goal_x);
	PID_Y.pid(now_y, goal_y);
	PID_l = sqrtf(PID_X.out * PID_X.out + PID_Y.out * PID_Y.out);
	float goal_a = atan(- PID_X.cte / PID_Y.cte);
	PID_a.pid(now_a, goal_a);

	Vright = PID_l + PID_a.out;
	Vleft  = PID_l - PID_a.out;

	float M1_SetVelocity(Vright);
	float M2_SetVelocity(Vleft);
}
