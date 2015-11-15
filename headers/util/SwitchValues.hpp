#include "SortingUtil.h"

#ifndef __SWITCH_VALUES_HPP__
#define __SWITCH_VALUES_HPP__

template<class T> void sortingUtils :: SwitchValues<T> :: switchCustomClasses(const T*& classA, const T*& classB)
{
    const T* temp = classA;
    classA = classB;
    classB = temp;
}

template<class T> void sortingUtils :: SwitchValues<T> ::switchInteger(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

#endif
