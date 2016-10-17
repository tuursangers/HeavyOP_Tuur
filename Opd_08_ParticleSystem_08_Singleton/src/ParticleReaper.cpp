#include "ParticleReaper.h"



void ParticleReaper::cleanup(vector<Particle*>& particles) {

	for (vector < Particle*>::iterator it = particles.begin(); it != particles.end();){
		if ((*it)->checkDead()) {
			delete *it;
			it = particles.erase(it);
		}
		else {
			++it;
		}
	}
}
