/*
 * bezier.cpp
 *
 *  Created on: 2019/08/19
 *      Author: masato
 */

#include "bezier.h"

bezier::bezier() {
	// TODO Auto-generated constructor stub

}

bezier::~bezier() {
	// TODO Auto-generated destructor stub
}

bezier::bezier_3(float P0, float P1, float P2, float P3, float t){
	P = (1 - t) * (1 - t) * (1 - t) * P0 + 3 * (1 - t) * (1 - t) * t * P1 + 3 * (1 - t) * t * t * P2 + t * t * t * P3;
	return P;
}

bezier::bezier_1(float P0, float P1, float t){
	P = (1 - t) * P0 + t * P1;
	return P;
}


