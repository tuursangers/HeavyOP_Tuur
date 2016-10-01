#pragma once

#include "ofMain.h"

class Particle {
public:
	ofPoint position;
	float radius;
	float random;
	ofVec2f speed;
	long lifetime;

	ofColor centerColor;
	ofColor innerColor;
	ofColor outerColor;

	Particle();

	void setup();
	void move();
	void draw();
	void ChangeOpacity();

};
