#include "ofApp.h"
/* Begin description
{
    Crunchy amplitude envelope loops
}
End description */

/* Snippet begin */
void ofApp::setup(){
    _template.setup(10, 60);
    manager = _template.getAudioUnitManager();
    synth.setup("Massive 1", AUDIOUNIT_MASSIVE);
    manager->createChain(&chain)
          .link(&synth)
          .toMixer();
    timeline = _template.getTimeline();
}

void ofApp::update(){
    //It's all in the MIDI and preset design
}

void ofApp::draw(){
    
}
/* Snippet end */

void ofApp::keyPressed(int key){
    
}

void ofApp::keyReleased(int key){

}

void ofApp::mouseMoved(int x, int y){

}

void ofApp::mouseDragged(int x, int y, int button){

}

void ofApp::mousePressed(int x, int y, int button){

}

void ofApp::mouseReleased(int x, int y, int button){

}

void ofApp::windowResized(int w, int h){

}

void ofApp::gotMessage(ofMessage msg){

}

void ofApp::dragEvent(ofDragInfo dragInfo){ 

}