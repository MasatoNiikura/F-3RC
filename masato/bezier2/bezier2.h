/*
 * bezier2.h
 *
 *  Created on: 2019/08/19
 *      Author: masato
 */

#ifndef BEZIER2_BEZIER2_H_
#define BEZIER2_BEZIER2_H_

#include "bezier.h"

class bezier2 {
private:
	const double k = 0.552284749;
public:
	bezier2();
	virtual ~bezier2();
	bezier bezi_xy;
	float Px;
	float Py;
	void turn_rl(float X0, float Y0, float X1, float Y1, float t);
	void turn_ud(float X0, float Y0, float X1, float Y1, float t);
};

#endif /* BEZIER2_BEZIER2_H_ */
