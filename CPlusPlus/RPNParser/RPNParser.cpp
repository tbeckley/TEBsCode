#include<iostream>
#include "Stack.cpp"
using namespace std;

int main(void)
{
    system ("clear");
    cout << "D O N G!" << endl;
    Stack myStack;
    myStack.push(4);
    myStack.push(12);
    myStack.push(2351);
    myStack.push(106.4);

    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
}