#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename arr, typename func>
void iter(arr &add, const int size, func temp)
{
    for(int i = 0; i < size; i++)
    {
        temp(add[i]);
    }
}

#endif