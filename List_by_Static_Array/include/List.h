#ifndef LIST_H
#define LIST_H


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
        int head[10000];
        int size;
};

#endif // LIST_H
