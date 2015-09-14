#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(25);
    ofSetLineWidth(0.0001);
    ofSetColor(0, 0, 0);
   // figure = *new ofPolyline();
    
    R=-200;
    r=10;
    R2 =R/2;
    r2=r/45;
    f=1;
    t=0;
 
    def=20;
    
    theta=0;
    
    
    mesh.setMode(OF_PRIMITIVE_LINE_STRIP);
    //mesh.setMode(OF_PRIMITIVE_LINES);
    

}

//--------------------------------------------------------------
void ofApp::update(){
   
    alpha=0;
    
    for (theta=0; theta<720; theta+=0.1) {
        
        
        x= (R-r)*(cos(theta))+f*(r*(cos((R/r-1)*theta)))+ ofGetWidth()/2;
        
        y= (R-r)*(sin(theta))+f*(r*(sin((R/r-1)*theta)))+ ofGetHeight()/2;
        
        
        //alpha values 0.1 0.2 0.3 0.4
        alpha+=0.2;
        
        
        
        //denominador z 1 2 4 8
        
        mesh.addVertex(ofVec3f(x,y,z/8*sin(alpha)+(z/1.5)));
        
        //mesh.addVertex(ofVec3f(x,y,z));
    }
    
   
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
   
    ofBackground(255, 255, 255);
    
    R =ofRandom(-210,350);
   
    
    r=ofRandom(50,150);
   
    
    f=ofRandom(-1.5,1.5);
    
    def=ofRandom(10,40);
    
    easyCam.begin();
    ofPushMatrix();
    ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2);
    mesh.draw();
    
    ofPopMatrix();
    easyCam.end();
    
    
    
    z=ofRandom(-400,400);
    
    z=z2;
    
    
    
    while (abs(int(z-z2))<50) {
        z=ofRandom(-400,400);
    
    }
    
    if (t==3){
        
        mesh.clear();
        t=0;
       
    
    }
    
    t++;
    

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
