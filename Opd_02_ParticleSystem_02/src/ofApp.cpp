#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);
	
	 for ( int i = 0; i < num; i++) {
		 cy[i] = Particle();
	 }

	 //movert = Spawner();


	/*
	for (int i = 0; i < 5; i++) {
		part1[i] = Particle();
	}
	*/

}

//--------------------------------------------------------------
void ofApp::update(){
	for ( int i = 0; i < num; i++) {
		cy[i].move();
	}

	//movert.move();

	//part1.move();
	/*
	for (int i = 0; i < 5; i++) {
		part1[i].move();
	}
	*/
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackgroundGradient(ofColor(60, 60, 60), ofColor(10, 10, 10));

	for ( int i = 0; i < num; i++) {
		cy[i].draw();
	}

	//movert.draw();

	//part1.draw();
	/*
	for (int i = 0; i < 5; i++) {
		part1[i].draw();
	}
	*/

}

void ofApp::keyPressed(int key) {
	for ( int i = 0; i < num; i++) {
		cy[i] = Particle();
	}

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
