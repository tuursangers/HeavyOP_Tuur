#include "Emitter.h"

Emitter::Emitter() {

}

void Emitter::setup(ofVec2f startPosition) {

	for (int i = 0; i < quantityPart; i++) {
		cy[i] = new Par_B();
		cy[i]->position = startPosition;
	}
	for (int i = 0; i < quantityPart; i++) {
		cy_B[i] = new Par_B();
		cy_B[i]->position = startPosition;
	}

}

void Emitter::draw() {

	for (int i = 0; i < quantityPart; i++) {
		cy[i]->draw();
	}
	for (int i = 0; i < quantityPart; i++) {
		cy_B[i]->draw();
	}
}

void Emitter::update() {

	for (int i = 0; i < quantityPart; i++) {
		cy[i]->move();
		cy[i]->ChangeOpacity();
	}
	for (int i = 0; i < quantityPart; i++) {
		cy_B[i]->move();
		cy_B[i]->ChangeOpacity();
	}

}
