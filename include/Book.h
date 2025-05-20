#ifndef BOOK_H
#define BOOK_H

#include<bits/stdc++.h>
using namespace std;

class Book{
    private:
           string title;
           string author;
           string ISBN;
           bool available;

    public: 
           //constructor
           Book(const string &title , const string &author , const string &ISBN , bool available);

           //getInfo
           void getInfo();

           //getTitle
           void getTitle();
};


#endif