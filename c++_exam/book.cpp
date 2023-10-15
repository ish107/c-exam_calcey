#include "book.h"

void book::printDescription(){
    cout<<"Book Name : "<<title<<" Author :"<<authorName<<endl;  // print book details
}
book::book(string title,string authorName){
    this->title = title;
    this->authorName = authorName;
}

void book::setTitle(){
     this->title = title;
}

string book::getTitle(){
    return this->title;
}

void book::setAuthorName(){
    this->authorName=authorName;
}

string book::getAuthorName(){
    return this->authorName;
}
   


    