#include "Particle.h"

Particle::Particle(int startX, int startY) {
	radius = ofRandom(5, 10);
	position = ofPoint(startX,startY);

	speed = ofVec2f(ofRandom(-3, 3), ofRandom(-3, 3));

	lifetime = 0.0f;
	maxLifetime = 10.0f;
	dead = false;

	centerColor = ofColor(255,255,255,255);
	innerColor = ofColor(centerColor, 60);
	outerColor = ofColor(centerColor, 20);
	random = ofRandom(1.0, 2.0);
}

void Particle::draw() {

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * .25);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius * .75);

	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius );


}

void Particle::update() {

	position.x += speed.x * random;
	position.y += speed.y * random;

	lifetime += 0.0001f;
	if (lifetime > maxLifetime) {
		dead = true;
	}
}

void Particle::positionColor() {

	float percentX = position.x / (float)ofGetWidth();
	percentX = ofClamp(percentX, 0, 1);
	ofFloatColor colorLeft = ofColor::red;
	ofFloatColor colorRight = ofColor::turquoise;
	ofFloatColor colorMix = colorLeft.getLerped(colorRight, percentX);

	centerColor = ofColor(colorMix, centerColor.a);
	innerColor = ofColor(colorMix, innerColor.a);
	outerColor = ofColor(colorMix, outerColor.a);

}

void Particle::ChangeOpacity() {

	float newlala = ofRandom(4, 2);

	if (centerColor.a >= 0) {
		centerColor -= (0, 0, 0, 2);
	}

	if (innerColor.a >= 0) {
		innerColor -= (0, 0, 0, 2);
	}

	if (outerColor.a >= 0) {
		outerColor -= (0, 0, 0, 2);
	}
}

bool Particle::checkDead() {

	if (dead == true) {
		return true;
	}

}