#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Spawner.h"

#define num 10000

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);


	//Spawner movert;
	Particle cy[num];

	//void Spawning();



};
