#include "ofMain.h"
#include "ofApp.h"
//#include "MSAFluidSolver.h"

#if defined( MSA_HOST_OPENFRAMEWORKS )
#include "MSAFluidDrawerGl-OF.h"

#elif defined( MSA_HOST_CINDER )
#include "MSAFluidDrawerGl-Cinder.h"

#endif


//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
