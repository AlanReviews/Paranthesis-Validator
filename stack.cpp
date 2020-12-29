#include <iostream>
#include "stack.h"

stack::stack() {
    for (int i = 0; i < CAPACITY; i++) {
        array[i] = 0;
    }
    size = 0;
    nextPos = 0;
}

void stack::push(const int num) {
    if (nextPos < CAPACITY) {
        array[nextPos] = num;
        nextPos++;
        size++;
    }
    else {
        std::cout << "Stack is full" << std::endl;
    }
}

void stack::pop(void) {
    if (nextPos > 0) {
        array[nextPos - 1] = 0;
        nextPos--;
        size--;
    }
    else {
        std::cout << "Stack is empty" << std::endl;
    }
}

int stack::peek(void) const {
    return array[nextPos - 1];
}

int stack::getSize(void) const {
    return size;
}

bool stack::empty(void) const {
    return (size == 0);
}

void stack::printStack(void) const {
    std::cout << "Alan's Stack Now" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << i << ": " << array[i] << std::endl;
    }
}


