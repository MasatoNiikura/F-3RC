/*
 * bezier.h
 *
 *  Created on: 2019/08/19
 *      Author: masato
 */

#ifndef BEZIER_BEZIER_H_
#define BEZIER_BEZIER_H_

class bezier {
public:
	bezier();
	virtual ~bezier();
	float P;
	float bezier_3(float P0, float P1, float P2, float P3, float t);
	float bezier_1(float P0, float P1, float t);
};

#endif /* BEZIER_BEZIER_H_ */
