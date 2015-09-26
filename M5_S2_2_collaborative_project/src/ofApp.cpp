#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// define Jordi's color
	colorJordi = ofColor(0,255,255);

    // define Alvaro's color
	colorAlvaro = ofColor(0,255,100);

    // define Fernando's color
    colorFernando = ofColor(0,0,0);

    // define JuanCarlos’s color
    colorJuanCarlos = ofColor(35,96,145);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


    for (int i = 0; i<1024; i++){
	r.dibujaRecuadro(colorJordi, ofPoint(0+i,0),10,10);
	
	r.dibujaRecuadro(colorAlvaro, ofPoint(0+i,40), 30, 30);
	
	r.dibujaRecuadro(colorFernando, ofPoint(0+i,8), 50, 50);
	
	r.dibujaRecuadro(colorJuanCarlos, ofPoint(0+i,110), 60, 60);
    
    }
	
}














