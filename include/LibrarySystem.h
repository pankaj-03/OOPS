#include "Book.h"
#include<bits/stdc++.h>

class LibrarySystem{

    private:
           vector<Book>books;
    
    public:
          void addBook(Book &book);
          bool removeBook(string &ISBN);
          void listBook();


};