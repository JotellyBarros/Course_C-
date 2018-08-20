#include <iostream>
#include "declarations.h"

int main(int argc, char *argv[])
{
    MyAccount account_01("Jótelly Barros", 3338262566);
    account_01.setMy_sex("Male");
    account_01.setMy_idade(31);
    account_01.setBank_name("Bradesco");
    account_01.setBank_num_account(2148835);
    account_01.setBank_num_agency(7653);
    account_01.OpenAccount();
    account_01.DepositAccount(30);

    MyAccount account_02("Naila Santos", 22012399823);
    account_02.setMy_sex("Female");
    account_02.setMy_idade(27);
    account_02.setBank_name("Bradesco");
    account_02.setBank_num_account(7365282);
    account_02.setBank_num_agency(2341);
    account_02.OpenAccount();
    account_02.DepositAccount(0);

    //TransferCashAccount account_01 to account_02
    MyAccount::TransferCashAccount(30 ,account_01, account_02);

    account_01.PrintState();
    account_02.PrintState();

    return 0;
}
