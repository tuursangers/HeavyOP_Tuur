#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	
	/*
	 for ( int i = 0; i < num; i++) {
		 cy[i] = Particle();
	 }
	 */

	 //movert = Spawner();

	EmitPoint01 = new Emitter();
	EmitPoint01-> setup(ofVec2f(200, 200));
	EmitPoint02 = new Emitter();
	EmitPoint02->setup(ofVec2f(700, 700));

	/*
	for (int i = 0; i < 5; i++) {
		part1[i] = Particle();
	}
	*/

}

//--------------------------------------------------------------

void ofApp::draw(){
	ofBackgroundGradient(ofColor(60, 60, 60), ofColor(10, 10, 10));

	//movert.draw();
	//ofVec2f random;
	//random.x = ofRandom(200, (ofGetWidth() - 200));
	//random.y = ofRandom(200, (ofGetHeight() - 200));
	EmitPoint01->draw();
	EmitPoint02->draw();
	//part1.draw();
	/*
	for (int i = 0; i < 5; i++) {
		part1[i].draw();
	}
	*/

}

void ofApp::update() {
	/*
	for ( int i = 0; i < num; i++) {
	cy[i].move();
	cy[i].ChangeOpacity();
	}
	*/

	//movert.move();
	EmitPoint01->update();
	EmitPoint02->update();
	//part1.move();
	/*
	for (int i = 0; i < 5; i++) {
	part1[i].move();
	}
	*/
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	
	/*
	for ( int i = 0; i < num; i++) {
		cy[i] = Particle();
	}
	*/

	EmitPoint01 = new Emitter();
	EmitPoint01->setup(ofVec2f(200, 200));
	EmitPoint02 = new Emitter();
	EmitPoint02->setup(ofVec2f(700, 700));

}

