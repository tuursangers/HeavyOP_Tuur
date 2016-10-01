#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Emitter.h"


class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);

	//Emitter* SpawnPoint01;

	Emitter* EmitPoint01;
	Emitter* EmitPoint02;

	//Spawner movert;
	//void Spawning();



};
