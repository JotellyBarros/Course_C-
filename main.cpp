#include <iostream>
#include <deque>

int main()
{
    // Using Deque
    // Create a deque containing integers
    std::deque<int> somedeque;

    // Add an integer to the beginning of the deque
    somedeque.push_back(1);
    somedeque.push_back(2);
    somedeque.push_back(3);
    // [1, 2, 3]
    somedeque.push_front(0);
    // now [0, 1, 2, 3]

    while (!somedeque.empty()){
        std::cout << somedeque.front() << std::endl;
        somedeque.pop_front();
    }

    return 0;
}
