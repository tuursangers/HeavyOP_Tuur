#include "Spawner.h"

Spawner::Spawner() {
	waitingTime = 0.2f;
	dots = Particle();

	curve = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
}

void Spawner::SpawningParticles() {

	dots.draw();

}

void Spawner::move() {
	position += (speed*.25);
	curve.rotate(2);
	position += curve;
}