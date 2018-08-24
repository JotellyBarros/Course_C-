#ifndef COURSE_C_INCLUDE_DECLARATIONS_H
#define COURSE_C_INCLUDE_DECLARATIONS_H
#include "mybank.h"
#include "myaccount.h"

class MyAccountSavings:public MyAccount
{
public:
    MyAccountSavings(std::string name_, size_t cpf_);
    void PrintState()
    {
        PrintGenericInformations(); // Return basic informations the user

        std::cout << "\nBank Name Bank: " << bank_name() << std::endl;

        std::string returnStatus = (bank_status() == true) ? "Account Enabled" : "Account Disabled";
        std::cout << "Bank Status: " << returnStatus << std::endl;
        std::cout << "Bank Number Account: " << num_account() << std::endl;
        std::cout << "Bank Number Agency: " << num_agency() << std::endl;

        std::cout << "\nAccount Bank Balance: U$ " << bank_balance() << std::endl;
        std::cout << "---------------------------------------------" << std::endl << std::endl;
    }
};

class MyAccountCurrent:public MyAccount
{
public:
    MyAccountCurrent(std::string name_, size_t cpf_);
    void PrintState()
    {
        PrintGenericInformations(); // Return basic informations the user

        std::cout << "\nBank Name Bank: " << bank_name() << std::endl;

        std::string returnStatus = (bank_status() == true) ? "Account Enabled" : "Account Disabled";
        std::cout << "Bank Status: " << returnStatus << std::endl;
        std::cout << "Bank Number Account: " << num_account() << std::endl;
        std::cout << "Bank Number Agency: " << num_agency() << std::endl;

        std::cout << "\nAccount Bank Balance: U$ " << bank_balance() << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
    }
};

#endif // COURSE_C_INCLUDE_DECLARATIONS_H
