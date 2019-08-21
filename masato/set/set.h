/*
 * set.h
 *
 *  Created on: 2019/08/16
 *      Author: masato
 */

#ifndef SET_H_
#define SET_H_

#include "PID.h"
#include "move.h"
#include "bezier.h"
#include "bezier2.h"
#include "localization.h"


class set {
protected:
	move game;
	bezier bezier_x;
	bezier bezier_y;
	bezier2 bezier_xy;
public:
	set();
	virtual ~set();
	int check;
	float x;
	float y;
	float a;
	void zero(void);
	int test(float dt);
	int curve_1(float dt);
	int straight(float dt);
};

#endif /* SET_H_ */
