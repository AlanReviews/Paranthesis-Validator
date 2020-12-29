/*
 * stack.h
 *
 *  Created on: Dec. 29, 2020
 *      Author: alan
 */

#ifndef STACK_H_
#define STACK_H_

#define CAPACITY (8)

class stack {
    public:
        stack();
        void push(const int num);
        void pop(void);
        int  peek(void) const;
        int  getSize(void) const;
        bool empty(void) const;
        void printStack(void) const;

    private:
        int array[CAPACITY];
        int size;
        int nextPos;
};

#endif /* STACK_H_ */
