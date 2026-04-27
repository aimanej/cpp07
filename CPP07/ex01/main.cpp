#include "iter.hpp"

void func1(const int &i)
{
    std::cout << i << std::endl;
}

void func2(std::string &str)
{
    for (int t = 0; str[t]; t++)
    {
        str.at(t) = toupper(str.at(t));
    }
}
void func3(float &i)
{
    i /= 2;
}

int main()
{
    const int arr[] = {15, 2, 4};

    iter(arr, 3, func1);

    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    std::string arr2[] = {"one ", "two ", "three"};

    iter(arr2, 3, func2);

    for (int i = 0; i < 3; i++)
    {
        std::cout << arr2[i] << std::endl;
    }

    float arr3[] = {45.5f, 2.45f};
    iter(arr3, 2, func3);

    for (int i = 0; i < 2; i++)
    {
        std::cout << arr3[i] << std::endl;
    }
}