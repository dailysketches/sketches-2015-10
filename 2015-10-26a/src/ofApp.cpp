#include "ofApp.h"
/* Begin description
{
    Discovering the performer modulator
}
End description */

/* Snippet begin */
void ofApp::setup(){
    _template.setup(46 , 120);
    manager = _template.getAudioUnitManager();
    synth.setup("Synth 1", AUDIOUNIT_MASSIVE);
    manager->createChain(&chain)
          .link(&synth)
          .toMixer();
    timeline = _template.getTimeline();
}

void ofApp::update(){

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