//
//  Queue.hpp
//  dataStructure
//
//  Created by Ellison, Cy on 2/11/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "LinkedList.hpp"

#include <iostream>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);

};

template <class Type>
Queue<Type> :: Queue() : LinkedList<Type>()
{
    
}



#endif /* Queue_h */
