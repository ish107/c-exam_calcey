#include "book.h"


class audioBook:book{
    protected:
        string voiceActor;

    public:

        string getVoiceActor();
        void setVoiceActor();

        void printDescription();

        audioBook(string title,string authorName, string voiceActor); 

};