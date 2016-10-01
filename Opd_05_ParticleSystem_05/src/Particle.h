#pragma once

#include "ofMain.h"

class Particle {
public:

	Particle(int startX, int startY);

	virtual void move();

	void draw();
	void ChangeOpacity();
	void positionColor();

protected:
	ofPoint position;
	float radius;
	float random;
	ofVec2f speed;
	long lifetime;

	ofColor centerColor;
	ofColor innerColor;
	ofColor outerColor;

};
