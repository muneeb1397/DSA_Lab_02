#ifndef LIST_H
#define LIST_H

struct Node{
public:
    int data;
    Node* next;
};

typedef Node* Nodeptr;

class List
{
    public:
        List();
        virtual ~List();
        List(const List& other);
        bool empty() const;
        int headElement() const;
        void addHead(int newdata);
        void delHead();
        int length() const;
        void print() const;

    private:
        Nodeptr head;
        void addEnd(int newdata);
};

#endif // LIST_H
