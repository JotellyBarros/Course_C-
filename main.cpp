#include <iostream>
#include <map>

int main()
{
    //Using Map whit Iterator
    //element has a key value
    std::map <int,int> myMap; // empty map container

    // insert elements
    myMap.insert(std::pair<int,int>(1,2));
    myMap.insert(std::pair<int,int>(3,4));
    myMap.insert(std::pair<int,int>(5,6));

    std::map <int,int>::iterator it = myMap.begin();

    //std:advance(it,1);
    for(myMap.begin(); it != myMap.end();it++){
        std::cout << it->first <<" :: "<<it->second<<std::endl;
    }

    return 0;
}
