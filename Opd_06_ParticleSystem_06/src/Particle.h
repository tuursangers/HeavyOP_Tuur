#pragma once

#include "ofMain.h"

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
	float maxLifetime;
	bool dead;

	ofColor centerColor;
	ofColor innerColor;
	ofColor outerColor;

};
