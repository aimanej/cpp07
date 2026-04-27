#include "Array.hpp"

int main()
{
    Array<int> a(4);

    std::cout << a.size() << std::endl;

    a[1] = 233;
    for(size_t t = 0; t < a.size(); t++)
        std::cout << a[t] << std::endl;
    
    Array<int> b(a);
    for(size_t t = 0; t < b.size(); t++)
        std::cout << b[t] << std::endl;

}