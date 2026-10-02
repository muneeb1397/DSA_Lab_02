#include "List.h"
#include <iostream>

using namespace std;

List::List() { head = NULL; }

List::~List() {
    while(head != NULL){
        delHead();
    }
}

List::List(const List& other)
{
    head = NULL;
    Nodeptr p = other.head;
    while(p != NULL){
        addEnd(p->data);
        p = p->next;
    }
}

int List::headElement() const
{
    if(empty())
        return NULL;
    return head->data;
}

void List::addHead(int newdata)
{
    Nodeptr p = new Node;
    p->data = newdata;
    p->next = head;
    head = p;
}

void List::delHead()
{
    if(empty())
        return;
    Nodeptr p = new Node;
    p = head;
    head = p->next;
    delete p;
}

void List::addEnd(int newdata)
{
    if(!empty()){
    Nodeptr p = head;
    Nodeptr endNode = new Node;
    while(p->next != NULL){
        p = p->next;
    }
    endNode->data = newdata;
    endNode->next = NULL;
    p->next = endNode;}
    else{
        head = new Node;
        head->data=newdata;
        head->next=NULL;
    }
}

int List::length() const
{
    int size = 0;
    Nodeptr p = head;
    while(p != NULL){
        size++;
        p = p->next;
    }
    return size;
}

void List::print() const
{
    cout << "[" ;
    Nodeptr p = head;
    while(p != NULL)
    {
        if(p != head) cout << ", " ;
        cout << p->data ;
        p = p->next;
    }
    cout << "]" << endl;
}

bool List::empty() const{
    return (length()==0);
}
