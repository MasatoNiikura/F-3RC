/*
 * move.h
 *
 *  Created on: 2019/08/16
 *      Author: masato
 */

#ifndef MOVE_H_
#define MOVE_H_

#include "PID.h"
#include "localization.h"

class move {
public:
	move();
	virtual ~move();
	localization loca;
	PID PID_X;
	PID PID_Y;
	float PID_l;
	PID PID_a;
	float Vright;
	float Vleft;
	void goposition(float x, float y);
};

#endif /* MOVE_H_ */
