#include "Array.hpp"

template <typename T>
size_t Array<T>::size() const
{
    return _size;
}

template <typename T>
Array<T>::Array()
{
    _size = 0;
    _arr = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    _arr = new T[n]();
}
template <typename T>
Array<T>::Array(const Array &obj)
{
    _arr = new T[obj.size()]();
    _size = obj.size();
    for (size_t t = 0; t < obj.size(); t++)
    {
        _arr[t] = obj._arr[t];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &obj)
{
    if (this != &obj)
    {
        delete[] _arr;
        _arr = new T[obj.size()]();
        _size = obj.size();
        for (size_t t = 0; t < obj.size(); t++)
        {
            _arr[t] = obj._arr[t];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _arr;
}

template <typename T>
T &Array<T>::operator[](size_t elem)
{
    if (elem >= _size || _size == 0)
        throw Array<T>::IndexOOB();
    return _arr[elem];
}

template <typename T>
const T &Array<T>::operator[](size_t elem) const
{
    if (elem >= _size || _size == 0)
        throw IndexOOB();
    return _arr[elem];
}

template <typename T>
const char *Array<T>::IndexOOB::what() const throw()
{
    return "index out of bounds";
}