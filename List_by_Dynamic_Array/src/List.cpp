#include "List.h"
#include <iostream>

using namespace std;

List::List() : size(0)
{
    list_elements = new int[size];
}

List::~List() { delete[] list_elements; }

List::List(const List& other)
{
    list_elements = new int[0];
    for(int i=0; i < other.length() ; i++){
        list_elements[i] = other.list_elements[i];
    }
    size = other.size;
}

int List::headElement() const
{
     return list_elements[0];
}

void List::addHead(int newdata)
{
    for(int i = size; i >= 0; i--){
       list_elements[i] = list_elements[i-1];
    }
    list_elements[0] = newdata;
    size++;
}

void List::delHead()
{
    for(int i = 0; i < size; i++){
        list_elements[i] = list_elements[i+1];
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
        cout << list_elements[i];
    }
    cout << "]" << endl;
}

bool List::empty() const{
    return (size==0);
}
