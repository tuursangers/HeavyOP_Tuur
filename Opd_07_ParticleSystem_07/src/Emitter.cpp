#include "Emitter.h"

Particle* Emitter::emit() {
	Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new Particle(originX, originY);
	}
	else {
		newParticle = new Par_B(originX, originY);
	}

	return newParticle;
} 

void Emitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void Emitter::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

