// C++ Program to demonstrate
// Use of template
#include <iostream>

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    // Call myMax for int
    std::cout << myMax<int>(3, 7) << std::endl;
    // call myMax for double
    std::cout << myMax<double>(3.0, 7.0) << std::endl;
    // call myMax for char
    std::cout << myMax<char>('g', 'e') << std::endl;

    return 0;
}


// https://www.geeksforgeeks.org/templates-cpp/