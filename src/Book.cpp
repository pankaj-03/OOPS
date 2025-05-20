#include "../include/Book.h"
#include<bits/stdc++.h>
using namespace std;

Book::Book(const string &title , const string &author , const string &ISBN , bool available ){
    this->title = title;
    this->author = author;
    this->ISBN = ISBN;
    this->available = available;
}

void Book:: getInfo() {
    cout<<"title : "<<title<<endl;
    cout<<"author : "<<author<<endl;
    cout<<"ISBN : "<<ISBN<<endl;
    cout<<"available : "<<available<<endl;
}

void Book:: getTitle(){
    cout<<"title :"<<title<<endl;
}