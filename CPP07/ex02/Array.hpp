#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{

private:
    T *_arr;
    size_t _size;

public:
    Array();
    Array(unsigned int n);
    Array(Array &obj);
    Array operator=(Array &obj);
    T& operator[](size_t elem);
    size_t size() const;
    class IndexOOB : public std::exception
    {
        virtual const char *what() const throw();
    };
};

#include "Array.tpp"

#endif