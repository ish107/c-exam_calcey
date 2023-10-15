#include "AudioBook.h"


void audioBook::printDescription(){
        cout<<"Book Name : "<<title<<" Author : "<<authorName<<" Voice By : "<<voiceActor<<endl;  //updated method for audio book
}

audioBook::audioBook(string title,string author,string voiceActor):book(title,authorName),voiceActor(voiceActor){} //inherited from book class

void audioBook::setVoiceActor(){
    this->voiceActor=voiceActor;
}

string audioBook::getVoiceActor(){
    return this->voiceActor;
}