#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //webcam.setup(640, 480);

    ofBackground(0);

    posicion = ofVec3f(500, 500, 0);

    for (int i = 0; i < np; i++) {
        px[i] = ofRandom(0, ofGetWidth());
        py[i] = ofRandom(0, ofGetHeight());

        vx[i] = ofRandom(-5, 5);
        vy[i] = ofRandom(-5, 5);

        tam[i] = ofRandom(4, 5);
        
        c1[i] = ofColor(0, 0, ofRandom(255)); //Color background
        c2[i] = ofColor(128, 255, 255); //HSB
        ca[i] = c1[i];
        
        //SOUND
        MysoundPlayer.load("ocean.mp3");
        MysoundPlayer.play();
    
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    //webcam.update();

    posicion = ofVec2f(ofGetMouseX(), ofGetMouseY());
    for (int i = 0; i < np; i++) {

        px[i] += vx[i];
        py[i] += vy[i];

        if (px[i] < 0 || px[i] > ofGetWidth()) {
            vx[i] *= -1;
            ca[i] = c1[i];
        }

        if (py[i] < 0 || py[i] > ofGetHeight()) {
            vy[i] *= -1;
            ca[i] = c1[i];
        }
        //CAMBIO DE DIRECCION AL CONTACTO
        ofVec3f particula = ofVec3f(px[i], py[i], 0);
        //DISTANCIA
        float distancia = posicion.distance(particula);

        if (distancia < t2 / 2) {
            tam[i] = 15; //TP
            ca[i] = c2[i];
            
            vx[i] *= -1;
            vy[i] *= -1;
        }

        if (tam[i] > 10) {
            tam[i] *= 0.95;
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    //webcam.draw(0,0);

       ofCircle(200, 100, 3); //ofCircle (px, py, rad);
       ofCircle(ofVec3f(100, 100, 0), 3); // ofCircle(Vector, rad);
       
       for (int i = 0; i < np; i++) {

           ofSetColor(ca[i]);
           ofFill();
           ofEllipse(px[i], py[i], tam[i], tam[i]);
           c3[i].getHsb(hue, saturation, brightness);
          
       }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'm') {
           MysoundPlayer.play();
           
       }
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
