#ifndef Node_CPP
#define Node_CPP

#include <iostream>
#include <cmath>

class Node{
    public:
        Node()
        {
            value = 0;
            next = NULL;
        }
        Node(double a)
        {
            value = a;
        }
        double getValue()
        {
            return value;
        }


        Node getNext()
        {
            return *next;
        }
        void setNext(Node* n)
        {
            next = n;
        }
    private:
        double value;
        Node *next;
};
#endif