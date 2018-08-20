#include <iostream>
#include "declarations.h"

int main() {

    MyAccount account_01("Jótelly Barros", 3338262566);
    account_01.setMy_sex("Male");
    std::cout << "\ngetMy_idade: " << account_01.getMy_idade() << "\n" << std::endl;
    account_01.PrintState();

    return 0;
}
