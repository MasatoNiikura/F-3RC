/*
 * PID.h
 *
 *  Created on: 2019/08/12
 *      Author: masato
 */

#ifndef PID_H_
#define PID_H_

class PID {
private:
	float kp;
	float ki;
	float kd;
	float cte;
	float i_error;
	float d_error;
	float prev_cte;
	int i;

public:
	PID();
	virtual ~PID();
	void init(float p, float i, float d);
	float pid(float now, float goal);
	float out;
};

#endif /* PID_H_ */
