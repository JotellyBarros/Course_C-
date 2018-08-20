#include <iostream>
#include "declarations.h"

int main() {

    MyAccount account_01("Jótelly Barros", 3338262566);
    account_01.setMy_sex("Male");
    account_01.setMy_idade(31);
    account_01.setBank_name("Bradesco");
    account_01.setBank_num_account(2148835);
    account_01.setBank_num_agency(7653);
    account_01.OpenAccount();
    account_01.DepositAccount(300);
    //account_01.CashOutAccount(10);

    //std::cout << "\ngetMy_idade: " << account_01.getMy_idade() << "\n" << std::endl;
    account_01.PrintState();

    MyAccount account_02("Naila Santos", 22012399823);
    account_02.setMy_sex("Female");
    account_02.setMy_idade(27);
    account_02.setBank_name("Bradesco");
    account_02.setBank_num_account(7365282);
    account_02.setBank_num_agency(2341);
    //account_02.CloseAccount();
    //account_02.OpenAccount();
    account_02.DepositAccount(200);
    account_02.PrintState();


    return 0;
}
