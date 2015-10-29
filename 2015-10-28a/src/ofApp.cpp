#include "ofApp.h"
/* Begin description
{
    Horrible dirty wobble noise
}
End description */

/* Snippet begin */
void ofApp::setup(){
    _template.setup(10, 60, 2, true);
    manager = _template.getAudioUnitManager();

    synth1.setup("Synth 1", AUDIOUNIT_MASSIVE);
    manager->createChain(&chain1)
           .link(&synth1)
           .toMixer();

    synth2.setup("Perc", AUDIOUNIT_MASSIVE);
    manager->createChain(&chain2)
           .link(&synth2)
           .toMixer();

    timeline = _template.getTimeline();
    timeline->addCurves("wobble");
    timeline->addCurves("rate");
    timeline->addCurves("noise");
    timeline->addCurves("sub");
    timeline->addCurves("pitch");
    timeline->addCurves("mod");
}

void ofApp::update(){
    synth1.set(Massive_macro_2, timeline->getValue("wobble"));
    synth1.set(Massive_macro_3, timeline->getValue("rate"));
    synth1.set(Massive_macro_4, timeline->getValue("noise"));
    synth1.set(Massive_macro_5, timeline->getValue("sub"));
    synth1.set(Massive_macro_6, timeline->getValue("pitch"));
    synth1.set(Massive_macro_7, timeline->getValue("mod"));
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