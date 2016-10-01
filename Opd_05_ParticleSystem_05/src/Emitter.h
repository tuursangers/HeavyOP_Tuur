#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Par_B.h"


class Emitter {
public:
	int originX;
	int originY;
	float curvingParticleRatio;

	void setOrigin(int x, int y);
	void setCurvingParticleRatio(float ratio);

	Particle* emit();
};
