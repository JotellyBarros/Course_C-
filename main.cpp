#include <iostream>
#include <set> // to using set

int main()
{
    // Using set whit iterator
    // Create a set containing integers
    std::set<int> setOfNumbers;

    // Inserting four elements
    setOfNumbers.insert(0);
    setOfNumbers.insert(1);
    setOfNumbers.insert(2);
    setOfNumbers.insert(3);

    // Clear the set
    // setOfNumbers.clear();

    // Erase a element of set
    // setOfNumbers.erase(2);

    // Printing of size set
    std::cout << "Set Size = " << setOfNumbers.size() << " Elements." << std::endl;

    // Printig all elements of set using iterator
    std::set<int>::iterator it = setOfNumbers.begin();

    // std::advance(it,1);
    // std::cout << *it << std::endl;

    for (setOfNumbers.begin(); it != setOfNumbers.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
