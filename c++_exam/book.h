#include "libraries.h"

class book{

    protected:
        string title;
        string authorName;

    public:
        void printDescription();

        string getTitle();   //getter

        void setTitle();  //setter

        string getAuthorName();
        void setAuthorName();

        book(string title,string authorName);  //construtor
        ~book();  //destructor

};