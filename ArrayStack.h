#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include "Pila.h"
#define FACTOR 10

template<typename T>

class ArrayStack:public Stack<T>{
private:
    T data[];
    int size; //memory size
    T* sp;
    void resize();
public:
    ArrayStack(int s): size(s), data(new T[size]), sp(data){};
    ~ArrayStack();
    void push(T);
    void pop();
    T top();
    bool empty();
};

#endif
