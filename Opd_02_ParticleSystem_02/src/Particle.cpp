#include "Particle.h"

Particle::Particle() {
	radius = ofRandom(0, 20);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	speed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));
	//speed.x = ofRandom(-5, 5);
	//speed.y = ofRandom(-5, 5);

	centerColor = ofColor(255,255,255);
	innerColor = ofColor(255, 0, 0);
	outerColor = ofColor(0, 255, 0);
}

void Particle::setup() {
}

void Particle::move() {
	position += speed;

}

void Particle::draw() {

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 2);

}