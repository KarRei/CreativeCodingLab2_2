#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    mesh.addVertex( ofVec3f ( 0 , 0 ));
    mesh.addColor( ofColor::blue );
    mesh.addVertex( ofVec3f ( ofGetWidth() , 0 ));
    mesh.addColor( ofColor::yellow );
    mesh.addVertex( ofVec3f ( ofGetWidth() , ofGetHeight()));
    mesh.addColor( ofColor::green );
    mesh.addVertex( ofVec3f ( 0 , ofGetHeight()));
    mesh.addColor( ofColor::red );
    mesh.setMode(OF_PRIMITIVE_TRIANGLE_FAN );
    
    mesh2.addVertex(ofVec3f((ofGetWidth()/2)-40 , (ofGetHeight()/2)-40 ));
    mesh2.addVertex(ofVec3f((ofGetWidth()/2)-40 , (ofGetHeight()/2)+40 ));
    mesh2.addVertex(ofVec3f((ofGetWidth()/2)+40 , (ofGetHeight()/2)+40 ));
    mesh2.addVertex(ofVec3f((ofGetWidth()/2)+40 , (ofGetHeight()/2)-40 ));
    //mesh2.setMode(OF_PRIMITIVE_LINE_LOOP); // Line cube
    mesh2.setMode(OF_PRIMITIVE_TRIANGLE_FAN); // Filled cube
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    mesh.draw();
    mesh2.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
