#include "ofApp.h"
/* Begin description
{
    Amplitude and filter envelopes
}
End description */

/* Snippet begin */
void ofApp::setup(){
    _template.setup(10, 90, 2, true);
    manager = _template.getAudioUnitManager();
    mixer = manager->getMixer();

    synth1.setup("Massive 1", AUDIOUNIT_MASSIVE);
    manager->createChain(&chain1)
        .link(&synth1)
        .toMixer();

    synth2.setup("Massive 2", AUDIOUNIT_MASSIVE);
    manager->createChain(&chain2)
        .link(&synth2)
        .toMixer();

    timeline = _template.getTimeline();
    timeline->addCurves("filter cutoff");
    timeline->addCurves("fx2 chorus wet");
    timeline->addCurves("noise synth volume");
}

void ofApp::update(){
    synth1.set(Massive_filter1_cut_prm_1, timeline->getValue("filter cutoff"));
    synth1.set(Massive_master_fx2_dry_wet, timeline->getValue("fx2 chorus wet"));
    synth2.set(Massive_master_volume, timeline->getValue("noise synth volume"));
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