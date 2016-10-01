#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Par_B.h"

#define quantityPart 200

class Emitter {
public:
	Emitter();
	float waitingTime;
	//ofVec2f position;

	void setup(ofVec2f startPosition);
	void draw();
	void update();

	Particle* cy[quantityPart];
	Par_B* cy_B[quantityPart];
};
