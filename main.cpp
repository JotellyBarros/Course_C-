#include <iostream>
#include <vector>

int main()
{
    //Using Vector whit Iterator
    std::vector<int> values={1,2,3,4,5,6,7,8,9,10};
    std::vector<int>::iterator it;

    it=values.begin();
    std::advance(it,2);
    std::cout << *it << std::endl;
    std::cout << *next(it,1) << std::endl;

    return 0;
}
