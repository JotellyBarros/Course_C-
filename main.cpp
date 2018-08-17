// C++ program to demostrate Using Class POO
#include <iostream>
#include <typeinfo>

class IntPair
{
public:
    int value_1;
    int value_2;

    void set_pair(int v_p1, int v_p2)
    {
        value_1 = v_p1;
        value_2 = v_p2;
    }

    void print()
    {
        std::cout << "Values: [" << value_1 << " : " <<value_2 << "]" << std::endl;
    }
};


int main()
{

    IntPair p1, p2;
    p1.set_pair(1,2);
    p2.set_pair(3,4);

    p1.print();
    p2.print();

    return 0;
}
