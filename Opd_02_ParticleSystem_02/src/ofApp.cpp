#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	for (int i = 0; i < 5; i++) {
		part1[i] = Particle();
	}

}

//--------------------------------------------------------------
void ofApp::update(){
	//part1.move();
	for (int i = 0; i < 5; i++) {
		part1[i].move();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	//part1.draw();
	for (int i = 0; i < 5; i++) {
		part1[i].draw();
	}

}

void ofApp::keyPressed(int key) {

}

/*
void ofApp::Spawning() {

	for (int i = 0; i<100; i++) {
		Particle p;
		p.move();
		p.draw();
	}
}
*/
