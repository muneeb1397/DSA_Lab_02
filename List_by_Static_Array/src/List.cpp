#include "List.h"
#include <iostream>

using namespace std;

List::List() : size(0) {}

List::~List() {}

List::List(const List& other)
{
    for(int i=0; i < other.length() ; i++){
        head[i]=other.head[i];
        size = other.size;
    }
}

int List::headElement() const
{
     return head[0];
}

void List::addHead(int newdata)
{
    for(int i = size; i >= 0; i--){
       head[i] = head[i-1];
    }
    head[0] = newdata;
    size++;
}

void List::delHead()
{
    for(int i = 0; i < size; i++){
        head[i]=head[i+1];
    }
    size--;
}

int List::length() const
{
    return size;
}

void List::print() const
{
    cout << "[" ;
    for(int i = 0; i < size ; i++)
    {
        if(i!=0) cout << ", " ;
        cout << head[i];
    }
    cout << "]" << endl;
}

bool List::empty() const{
    return (size==0);
}
