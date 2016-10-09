#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofHideCursor();

	nmbrParticles = 0;

	EmitPoint01 = Emitter();
	EmitPoint01.setOrigin(ofGetMouseX(), ofGetMouseY());
	EmitPoint01.setCurvingParticleRatio(.6);
	EmitPoint02 = Emitter();
	EmitPoint02.setOrigin(700,700);
	EmitPoint01.setCurvingParticleRatio(0);


}

void ofApp::update() {

	EmitPoint01.setOrigin(ofGetMouseX(), ofGetMouseY());

	for (int i = 0; i < particles.size(); i++) {
		particles[i]->move();

	}

	Particle* freshParticle = EmitPoint01.emit();
	particles.push_back(freshParticle);
	if (nmbrParticles > 200) {
		particles.erase(particles.begin());
	}
	
	Particle* freshParticle2 = EmitPoint02.emit();
	particles.push_back(freshParticle2);
	if (nmbrParticles > 200) {
		particles.erase(particles.begin());
	}

	nmbrParticles = particles.size();
}
//--------------------------------------------------------------

void ofApp::draw(){
	ofBackgroundGradient(ofColor(25, 25, 25), ofColor(0, 0, 0));
	ofSetColor(255,255,255);
	ofDrawBitmapString("Amount: ", 2, 20);
	ofDrawBitmapString(nmbrParticles, 4, 35);

	


	for (int i = 0; i < particles.size(); i++) {
		particles[i]->draw();
		//particles[i]->positionColor();
		particles[i]->ChangeOpacity();
	}


}



//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

	particles.clear();

	//EmitPoint01 = new Emitter();
	//EmitPoint01->setup(ofVec2f(200, 200));
	//EmitPoint02 = new Emitter();
	//EmitPoint02->setup(ofVec2f(700, 700));

}

