#include <iostream>
#include <list>

int main()
{
    // Using list
    // Create a list containing integers
    std::list<int> somelist;

    // Add an integer to the beginning of the list
    somelist.push_back(1);
    somelist.push_back(2);
    somelist.push_back(3);

    std::cout << somelist.front() << std::endl;
    somelist.pop_front();
    std::cout << somelist.front() << std::endl;
    somelist.pop_front();
    std::cout << somelist.front() << std::endl;

    return 0;
}
