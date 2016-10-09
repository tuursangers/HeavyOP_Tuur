#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Emitter.h"


class ofApp : public ofBaseApp {

public:

	int nmbrParticles;

	void setup();
	void update();
	void draw();

	void keyPressed(int key);


	vector<Particle*> particles;

	Emitter EmitPoint01;
	Emitter EmitPoint02;




};
