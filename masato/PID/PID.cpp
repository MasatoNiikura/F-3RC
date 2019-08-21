/*
 * PID.cpp
 *
 *  Created on: 2019/08/12
 *      Author: masato
 */

#include "PID.h"

PID::PID():i_error(0), i(true) {
	// TODO Auto-generated constructor stub
}

PID::~PID() {
	// TODO Auto-generated destructor stub
}

void PID::init(float P, float I, float D)
{
	kp = P;
	ki = I;
	kd = D;
}

float PID::pid(float now, float goal)
{
	cte = goal - now;		//目標値までの距離
	if (0 > i_error) {		//目標値を過ぎたときに積分を0にする
		if (cte > 0) i_error = 0;
	}else
		if (cte < 0) i_error = 0;
	i_error += 0.01 * cte;	//積分
	if (i){
		i = false;
		d_error = 0;
	}else
		d_error = (cte - prev_cte) / 0.01;	//微分
	prev_cte = cte;
	out = kp * cte + ki * i_error + kd * d_error;	//出力
	return out;
}
