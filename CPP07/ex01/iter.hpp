#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename arr, typename func>
void iter(arr *add, const size_t size, func temp)
{
    for(size_t i = 0; i < size; i++)
    {
        temp(add[i]);
    }
}

template <typename arr, typename func>
void iter(const arr *add, const size_t size, func temp)
{
    for(size_t i = 0; i < size; i++)
    {
        temp(add[i]);
    }
}

#endif