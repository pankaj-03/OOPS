#include "../include/LibrarySystem.h"
#include<bits/stdc++.h>
using namespace std;

void LibrarySystem::addBook(Book &book){
        books.push_back(book);
        cout<<"Book added : "<< book.getTitle()<<endl;
}