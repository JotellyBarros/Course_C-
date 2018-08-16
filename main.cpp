#include <iostream>
#include <algorithm> // to using find
#include <list>

int main()
{
    // Using list whit find
    // Create a list containing integers
    std::list<int> someList;

    int numberFound = 4;

    // Add an integer to the beginning of the list
    someList.push_back(1);
    someList.push_back(2);
    someList.push_back(3);

    // Using find
    auto findNow = std::find(someList.begin(), someList.end(), numberFound);

    if (findNow != std::end(someList)) {
        std::cout << "Number found" << std::endl;
    } else {
        std::cout << "Number not found!" << std::endl;
    }

    return 0;
}
