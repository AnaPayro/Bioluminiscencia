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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        int np = 800;

                float px[800];
                float py[800];
                float vx[800];
                float vy[800];

                float tam[800];
                bool dentro[800];


                //PVector
                ofVec3f posicion;
                int t2 = 80;

                //ofColor
                ofColor ca[800];
                ofColor c1[800];
                ofColor c2[800];

                //Sound
                ofSoundPlayer MysoundPlayer;

                //HSB
                ofColor c3[800];
                float hue = 100;  // The hue value to set.
                float saturation = 100; // The saturation value to set.
                float brightness = 100; // The brightness value to set.


                //VIDEO

                //  ofVideoGrabber webcam;
                //  ofx2DCam cam;
                //  ofEasyCam easyCam;

};
