/***************************************************************************
                          BumperBehavopr.cpp  -  description
                             -------------------
    begin                : Thu Mar 9 2000
    copyright            : (C) 2000 by 
    email                : 
 ***************************************************************************/

#include "Private.h"
#include "BumperBehavior.h"
#include "Group.h"
#include "Pinball.h"
#include "Polygon.h"
#include "Shape3D.h"
#include "SoundUtil.h"
#include "Loader.h"

BumperBehavior::BumperBehavior() : Behavior() {
	m_iLightCounter = -1;
	m_iSound = -1;
	m_sigBump = Loader::getInstance()->getSignal("bump");
	this->setType(PBL_TYPE_BUMPERBEH);
}

BumperBehavior::~BumperBehavior() {
}

void BumperBehavior::onTick() {
	if (m_iLightCounter > -1) m_iLightCounter--;
	if (m_iLightCounter == 0 ) SetLightOn(false);
}

void BumperBehavior::StdOnCollision() {
	EM_COUT("BumperBehavior::StdOnCollision()", 1);

	OnCallerProperty( PBL_BALL_1 OR_CP PBL_BALL_2 OR_CP PBL_BALL_3 OR_CP PBL_BALL_4 ) {
		if (m_iLightCounter > 10) {
			return;
		}
		m_iLightCounter = 20;
		SetLightOn(true);
		SendSignal(m_sigBump, 0, this->getParent(), NULL);
		SoundUtil::getInstance()->playSample(m_iSound, false);
	}
}