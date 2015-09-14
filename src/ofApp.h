#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    float x;
    float y;
    float z;
    float z2;
    
    float R;
    float r;
    float r2;
    float R2;
    float def;
    float inc;
    
    float f;
    
    float alpha;
    float theta;
    
    //ofPolyline figure;
    
    ofMesh mesh;
    ofMesh mesh2;
    
    ofEasyCam easyCam;
    
    int t;
    
    
};;
