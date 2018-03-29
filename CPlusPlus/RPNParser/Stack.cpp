#ifndef Stack_CPP
#define Stack_CPP
#include "Node.cpp"
#include <iostream>
using namespace std;

class Stack
{
    public:
        Stack()
        {
        }
        void push(double newValue)
        {
            Node n (newValue);
            n.setNext(top);
            top = &n;
            cout << "Data: " << (*top).getValue() << "  Address: " << top << endl;
        }
        
        double pop()
        {
            double v = (*top).getValue();
            Node nextNode = (*top).getNext();
            top = &nextNode; 
            cout << "Popped! top: " << top << endl;
            return v;
        }
    private:
        Node *top;
};

#endif