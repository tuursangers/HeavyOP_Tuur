#pragma once

#include "ofMain.h"

class Particle {
public:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime;

	ofColor centerColor = ofColor::white;
	ofColor innerColor;
	ofColor outerColor;

	Particle();

	void setup();
	void move();
	void draw();
};
