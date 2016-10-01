#include "Particle.h"

Particle::Particle() {
	radius = ofRandom(0, 20);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	speed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));
	//speed.x = ofRandom(-5, 5);
	//speed.y = ofRandom(-5, 5);
	centerColor = ofColor(255,255,255,255);
	innerColor = ofColor(14, 254, 128, 8);
	outerColor = ofColor(14, 254, 128, 1);
	random = ofRandom(1.0, 2.0);
}

void Particle::setup() {
}

void Particle::draw() {

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 3);


}

void Particle::move() {

	position.x += speed.x * random;
	position.y += speed.y * random;

}

void Particle::ChangeOpacity() {

	float newlala = ofRandom(0.05, 0);

	if (centerColor.a >= 0) {
		centerColor -= (0, 0, 0, newlala);
	}

	if (innerColor.a >= 0) {
		innerColor -= (0, 0, 0, newlala);
	}

	if (outerColor.a >= 0) {
		outerColor -= (0, 0, 0, newlala);
	}
}


