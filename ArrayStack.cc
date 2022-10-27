#include "ArrayStack.h"

template<typename T>
void ArrayStack<T>::push(T e){
    int numEle = sp - data;
    if (numEle == size)
        resize();
    *sp = e;
    sp++;
}

template<typename T>
void ArrayStack<T>::push(T e){
    int numEle == sp - data;
    assert(empty());
    sp--;
}

template<typename T>
bool ArrayStack<T>::empty(){
    int numEle == sp - data;
    if (numEle == 0)
        return true;
    return false;    
}

template<typename T>
void ArrayStack<T>::resize(){
    T newData[] = new T[size + FACTOR];
    for (int i = 0; i< size; i++)
        newData[i] = data[i];
    delete[] data;
    data = newData;
    sp = data + size;
    size += FACTOR;
}

template<typename T>
void ArrayStack<T>::pop(){
    assert(empty());
    sp--;
}

template<typename T>
T ArrayStack<T>::top(){
    assert(empty());
    return *(sp - 1)
}