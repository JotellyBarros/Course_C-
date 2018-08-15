#include <iostream>
#include <queue>

int main()
{
    //Using Queue
    std::queue<int> somequeue;

    somequeue.push(0);
    somequeue.push(2);
    somequeue.push(4);
    somequeue.push(6);
    somequeue.push(8);

//    std::cout << somequeue.front() << std::endl;
//    somequeue.pop();
//    std::cout << somequeue.front() << std::endl;

    while (!somequeue.empty()){
        std::cout << somequeue.front() << std::endl;
        somequeue.pop();
    }

    return 0;
}
