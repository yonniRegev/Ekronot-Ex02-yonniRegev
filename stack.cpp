#include "Stack.h"
#include <iostream>

void initStack(Stack* s)
{
    if (s != nullptr)
    {
        s->top = nullptr;
    }
}

void push(Stack* s, unsigned int element)
{
    if (s != nullptr)
    {
        addToList(&(s->top), element);
    }
}

int pop(Stack* s)
{
    if (isEmpty(s))
    {
        return -1;
    }
    return removeFromList(&(s->top));
}

void cleanStack(Stack* s)
{
    if (s != nullptr)
    {
        while (!isEmpty(s))
        {
            removeFromList(&(s->top));
        }
    }
}

bool isEmpty(Stack* s)
{
    if (s == nullptr)
    {
        return true;
    }
    return s->top == nullptr;
}

bool isFull(Stack* s)
{
    return false;
}