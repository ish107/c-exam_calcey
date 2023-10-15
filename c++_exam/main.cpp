#include "AudioBook.h"
#include "book.h"
#include "Bookshop.h"

int main(){


    int size = 10 ;
    char choice = 'y';
    
    book* booklist = static_cast<book*>(malloc(10*sizeof(book)));

    do{
        for(int i=0; i<size; i++){

            (&booklist[i])(book) = new book;
            getline(cin,booklist[i].title);
            getline(cin,booklist[i].authorName);

            bookcount = bookcount +1;

            booklist[i].printDescription();
        }
        cout<<"do you wish to add more books(y/n)"<<endl;
        cin>>choice;

        if(choice == 'y'){
            book* booklist = static_cast<book*>(realloc(5*sizeof(book)));
        }

    }while(choice=='y');
    
        
    return 0;
}