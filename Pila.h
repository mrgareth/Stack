#ifndef PILA_H
#define PILA_H

template<typename T>

class Stack{
public:
    virtual void push(T);
    virtual void pop();
    virtual T top();
    virtual bool empty();
};
#endif