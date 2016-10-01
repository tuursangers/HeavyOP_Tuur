#pragma once

#include "ofMain.h"
#include "Particle.h"

class Par_B : public Particle {

public:
	ofVec2f curve;

	Par_B(int startX, int startY);
	void move();
	void positionColor();
	
};