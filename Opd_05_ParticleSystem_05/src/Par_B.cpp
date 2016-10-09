#include "Par_B.h"

Par_B::Par_B(int startX, int startY) : Particle(startX, startY) {

	//centerColor = ofColor(255, 255, 255, 255);
	//innerColor = ofColor(251,255,67, 8);
	//outerColor = ofColor(251, 255, 67, 1);
	curve = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
	radius = ofRandom(2, 5);
}

void Par_B::move() {
	
	curve.rotate(5);
	position += curve;

}

void Par_B::positionColor() {

	centerColor = ofColor(255, 255, 255, 255);
	innerColor = ofColor(255, 255, 255, 255);
	outerColor = ofColor(255, 255, 255, 255);

}


