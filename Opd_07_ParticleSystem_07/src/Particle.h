#pragma once

#include "ofMain.h"

#define MAX_LIFETIME 150

class Particle {
public:

	Particle(int startX, int startY);

	virtual void update();
	virtual void positionColor();

	virtual void draw();
	void ChangeOpacity();
	bool checkDead();
	

protected:
	ofPoint position;
	float radius;
	float random;
	ofVec2f speed;
	float lifetime;
	bool dead;

	ofColor centerColor;
	ofColor innerColor;
	ofColor outerColor;

};
