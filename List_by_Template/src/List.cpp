#include "List.h"
#include <iostream>
#include <string>

using namespace std;

template <typename T>
List<T>::List() { head = NULL; }

template <typename T>
List<T>::~List() {
    while(head != NULL){
        delHead();
    }
}

template <typename T>
List<T>::List(const List& other)
{
    head = NULL;
    Node<T>* p = other.head;
    while(p != NULL){
        addEnd(p->data);
        p = p->next;
    }
}

template <typename T>
T List<T>::headElement() const
{
    if(empty())
        return NULL;
    return head->data;
}

template <typename T>
void List<T>::addHead(T newdata)
{
    Node<T>* p = new Node<T>;
    p->data = newdata;
    p->next = head;
    head = p;
}

template <typename T>
void List<T>::delHead()
{
    if(empty())
        return;
    Node<T>* p = new Node<T>;
    p = head;
    head = p->next;
    delete p;
}

template <typename T>
void List<T>::addEnd(T newdata)
{
    if(!empty()){
    Node<T>* p = head;
    Node<T>* endNode = new Node<T>;
    while(p->next != NULL){
        p = p->next;
    }
    endNode->data = newdata;
    endNode->next = NULL;
    p->next = endNode;}
    else{
        head = new Node<T>;
        head->data=newdata;
        head->next=NULL;
    }
}

template <typename T>
int List<T>::length() const
{
    int size = 0;
    Node<T>* p = head;
    while(p != NULL){
        size++;
        p = p->next;
    }
    return size;
}

template <typename T>
void List<T>::print() const
{
    cout << "[" ;
    Node<T>* p = head;
    while(p != NULL)
    {
        if(p != head) cout << ", " ;
        cout << p->data ;
        p = p->next;
    }
    cout << "]" << endl;
}

template <typename T>
bool List<T>::empty() const{
    return (length()==0);
}


template class List<int>;
template class List<double>;
template class List<string>;
