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
	cte = goal - now;		//�ڕW�l�܂ł̋���
	if (0 > i_error) {		//�ڕW�l���߂����Ƃ��ɐϕ���0�ɂ���
		if (cte > 0) i_error = 0;
	}else
		if (cte < 0) i_error = 0;
	i_error += 0.01 * cte;	//�ϕ�
	if (i){
		i = false;
		d_error = 0;
	}else
		d_error = (cte - prev_cte) / 0.01;	//����
	prev_cte = cte;
	out = kp * cte + ki * i_error + kd * d_error;	//�o��
	return out;
}
