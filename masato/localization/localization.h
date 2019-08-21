/*
 * localization.h
 *
 *  Created on: 2019/08/16
 *      Author: masato
 */

#ifndef LOCALIZATION_LOCALIZATION_H_
#define LOCALIZATION_LOCALIZATION_H_

class localization {
public:
	localization();
	virtual ~localization();
	float GetX();	//センサx座標
	float GetY();	//センサy座標
	float GetYaw();	//ジャイロセンサ（座標軸に対する機体の傾き）
	float M1_SetVelocity(float);	//モータ１の出力
	float M2_SetVelocity(float);	//モータ２の出力
	void Delay(float); //引数はプログラム停止時間[msec]
};

#endif /* LOCALIZATION_LOCALIZATION_H_ */
