#include "Par_B.h"

Par_B::Par_B(int startX, int startY) : Particle(startX, startY) {

	//centerColor = ofColor(255, 255, 255, 255);
	//innerColor = ofColor(251,255,67, 8);
	//outerColor = ofColor(251, 255, 67, 1);
	curve = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
	radius = ofRandom(3, 5);
}

void Par_B::update() {
	
	curve.rotate(5);
	position += curve;

	lifetime++;
}


void Par_B::draw() {

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * .25);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius * .75);

	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius);

}

