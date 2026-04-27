#include "Array.hpp"

int main()
{
    try
    {

        std::cout << "int array test : " << std::endl;

        Array<int> a(4);

        std::cout << "size of arr : " << a.size() << std::endl;
        for (size_t t = 0; t < a.size(); t++)
        {
            a[t] = t;
            std::cout << a[t] << std::endl;
        }

        std::cout << "string array test : " << std::endl;
        Array<std::string> arr(2);
        arr[0] = "working";
        arr[1] = "class";

        std::cout << "size of arr : " << arr.size() << std::endl;
        for (size_t t = 0; t < arr.size(); t++)
        {
            std::cout << arr[t] << std::endl;
        }

        std::cout << "out of bound throw check : " << std::endl;
        arr[2] = "throwing !";
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}