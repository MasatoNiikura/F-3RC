/*
 * set.cpp
 *
 *  Created on: 2019/08/16
 *      Author: masato
 */

#include "set.h"

set::set() {
	// TODO Auto-generated constructor stub

}

set::~set() {
	// TODO Auto-generated destructor stub
}

void set::zero(void){
	game.PID_l.init(1, 0, 0);
	game.PID_a.init(1, 0, 0);
	x = 0;
	y = 0;

	game.goposition(x, y);
}

int set::test(float dt){
	float t;
	check = 0;
	t = dt / (100 * 10);
	if (t >= 1) t = 1;

	game.PID_l.init(500, 5, 5);
	game.PID_a.init(1000, 10, 10);
	x = bezier_x.bezier_3(0, 0, 20, 20, t);
	y = bezier_y.bezier_3(0, 15, 15, 30, t);

	game.goposition(x, y);
	if (t == 1) check = 1;
	return check;
}

int set::straight(float dt){
	float t;
	check = 0;
	t = dt / (100 * 10);
	if (t >= 1) t = 1;

	game.PID_l.init(500, 5, 5);
	game.PID_a.init(1000, 10, 10);
	x = 0;
	y = bezier_y.bezier_1(0, 30, t);

	game.goposition(x, y);
	if (t == 1) check = 1;
	return check;
}

int set::curve_1(float dt){
	float t;
	check = 0;
	t = dt / (100 * 10);
	if (t >= 1) t = 1;

	game.PID_l.init(500, 5, 5);
	game.PID_a.init(1000, 10, 10);
	bezier_xy.turn_rl(0, 0, 10, 10, t);
	x = bezier_xy.Px;
	y = bezier_xy.Py;

	game.goposition(x, y);
	if (t == 1) check = 1;
	return check;
}
