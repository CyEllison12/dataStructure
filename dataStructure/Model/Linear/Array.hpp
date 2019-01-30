//
//  Array.hpp
//  dataStructure
//
//  Created by Ellison, Cy on 1/30/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
    
public:
    Array<Type>(int size);
    
    Array<Type>(const Array<Type> & toCopy);
    
    ~Array<Type>();
    
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int Index) const;
    
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new Type[size];
}

template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
    this-> = toCopy.getSize();
    
    internalArray = new Type[size];
    
    for(int index = 0; index < size; index++)
    {
        internalArray[index] = toCopy[index];
    }
}

template <class Type>
Array<Type> :: ~Array()
{
    delete [] internalArray;
}

template <class Type>
Array<Type> & Array<Type> :: operator = (const Array<Type> & toAssign)
{
    if(&toAssign != this)
    {
        if(size != toAssign.getSize())
        {
            delete [] internalArray;
            size = toAssign.getSize();
            internalArray = new Type [size];
        }
        
        for(int index = 0; index < size; index++)
        {
            internalArray[index] = toAssign[index];
        }
    }
    return *this;
}

template <class Type>
Type & Array<Type> :: operator [] (int index)
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

template <class Type>
Type Array<Type> :: operator [] (int index) const
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}
#endif /* Array_h */