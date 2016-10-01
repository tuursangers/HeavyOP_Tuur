#pragma once

#include "ofMain.h"
#include "Particle.h"

class Spawner : public Particle {
public:
	Spawner();
	float waitingTime;

	void SpawningParticles();

	Particle dots;

	ofVec2f curve;
	void move();


};
