/*
 * bezier2.cpp
 *
 *  Created on: 2019/08/19
 *      Author: masato
 */

#include "bezier2.h"

bezier2::bezier2() {
	// TODO Auto-generated constructor stub

}

bezier2::~bezier2() {
	// TODO Auto-generated destructor stub
}

bezier2::turn_rl(float X0, float Y0, float X1, float Y1, float t){
	Px = bezi_xy.bezier_3(X0, X0 + (X1 - X0) * k, X1, X1);
	Py = bezi_xy.bezier_3(Y0, Y1, Y1 - (Y1 - Y0) * k, Y1);
}

bezier2::turn_ud(float X0, float Y0, float X1, float Y1, float t){
	Px = bezi_xy.bezier_3(X0, X1, X1 - (X1 - X0) * k, X1);
	Py = bezi_xy.bezier_3(Y0, Y0 + (Y1 - Y0) * k, Y1, Y1);
}
