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
	float GetX();	//�Z���Tx���W
	float GetY();	//�Z���Ty���W
	float GetYaw();	//�W���C���Z���T�i���W���ɑ΂���@�̂̌X���j
	float M1_SetVelocity(float);	//���[�^�P�̏o��
	float M2_SetVelocity(float);	//���[�^�Q�̏o��
	void Delay(float); //�����̓v���O������~����[msec]
};

#endif /* LOCALIZATION_LOCALIZATION_H_ */
