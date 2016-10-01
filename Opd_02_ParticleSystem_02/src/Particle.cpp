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
}

void Particle::setup() {
}

void Particle::move() {
	position += .2 ;
}

void Particle::draw() {

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 3);
	

}