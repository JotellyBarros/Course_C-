#include "declarations.h"
#include <iostream>

// Default Constructor
MyAccountSavings::MyAccountSavings(std::string name_, size_t cpf_)
    :MyAccount(name_, cpf_)
{
    setType_account("Account Savings"); // Data of MyAccount Savings
}

// Default Constructor
MyAccountCurrent::MyAccountCurrent(std::string name_, size_t cpf_)
    :MyAccount(name_, cpf_)
{
    setType_account("MyAccount Current"); // Data of MyAccount Current
}
