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
    Array(const Array &obj);
    Array &operator=(const Array &obj);
    ~Array();
    T& operator[](size_t elem);
    const T& operator[](size_t elem) const;
    size_t size() const;
    class IndexOOB : public std::exception
    {
        virtual const char *what() const throw();
    };
};

#include "Array.tpp"

#endif