#ifndef LIST_H
#define LIST_H

template <typename T>

struct Node{
public:
    T data;
    Node* next;
};

template <typename T>
class List
{
    public:
        List();
        virtual ~List();
        List(const List& other);
        bool empty() const;
        T headElement() const;
        void addHead(T newdata);
        void delHead();
        int length() const;
        void print() const;

    private:
        Node<T>* head;
        void addEnd(T newdata);
};

#endif // LIST_H
