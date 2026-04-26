#include "iter.hpp"


void func1(int &i)
{
    i += 1;
}

void func2(std::string &str)
{
    for(int t = 0; t < str.size(); t++)
    {
        str.at(t) = toupper(str.at(t));
    }
}



int main()
{
    int arr[] = {15, 2 ,4};

    iter(arr, 3, func1);

    for(int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << std::endl;

    }

    std::string arr2[] = {"one ", "two ", "three"};

    iter(arr2, 3, func2);

    for(int i = 0; i < 3; i++)
    {
        std::cout << arr2[i] << std::endl;

    }
}