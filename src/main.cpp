#include "declarations.h"
#include <iostream>

int main(int argc, char *argv[])
{
    //    //    MyAccount *account = new MyAccountCurrent("Jotelly Barros", 3335845266);
    //    //    account->PrintState();

    //    //    account = new MyAccountSavings("Jotelly Barros", 3335845266);
    //    //    account->PrintState();

    //    //---------------------------------------------------------------------------
    //    MyAccountCurrent accountCurrent_01("Jotelly Barros", 3335845266);

    //    accountCurrent_01.setSexo("Male");
    //    accountCurrent_01.setIdade(31);
    //    accountCurrent_01.setBank_name("Bradesco");
    //    accountCurrent_01.setNum_account(2148835);
    //    accountCurrent_01.setNum_agency(7653);

    //    //Actions
    //    accountCurrent_01.OpenAccount();
    //    accountCurrent_01.DepositAccount(250);

    //    //Prints
    //    accountCurrent_01.PrintState();

    //    //---------------------------------------------------------------------------
    //    MyAccountSavings accountSavings_01("Naila Barros", 2135854684);
    //    accountSavings_01.setSexo("Female");
    //    accountSavings_01.setIdade(27);
    //    accountSavings_01.setBank_name("Bradesco");
    //    accountSavings_01.setNum_account(8457839);
    //    accountSavings_01.setNum_agency(8559);

    //    //Actions
    //    accountSavings_01.OpenAccount();
    //    accountSavings_01.DepositAccount(150);

    //    //Prints
    //    accountSavings_01.PrintState();

    //    //---------------------------------------------------------------------------
    //    //TransferCashAccount account_01 to account_02
    //    MyAccount::TransferCashAccount(60 ,accountCurrent_01, accountSavings_01);

    //    std::cout << std::endl << "Balance: U$ " << accountCurrent_01.bank_balance() << " <- " << accountCurrent_01.name() << std::endl;
    //    std::cout << "Balance: U$ " << accountSavings_01.bank_balance() << " <- " << accountSavings_01.name() << std::endl;
    //    //---------------------------------------------------------------------------

    //    //std::cout << __LINE__ << std::endl; //Print a line of IDE

    // Dynamic memory allocation
    int *value = new int();
    *value = 1;

    std::cout << ((*value == 1) ? "exist..." : "don't exist...") << std::endl;

    // Delete value in the memory
    delete value;

    std::cout << ((*value == 1) ? "exist..." : "don't exist...") << std::endl;

    return 0;
}
