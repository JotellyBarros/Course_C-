#include <iostream>
#include "declarations.h"

std::string MyAccount::getMy_sexo() const
{
    return my_sexo;
}

void MyAccount::setMy_sex(const std::string &value)
{
    my_sexo = value;
}

int MyAccount::getMy_idade() const
{
    return my_idade;
}

void MyAccount::setMy_idade(int value)
{
    my_idade = value;
}

size_t MyAccount::getMy_cpf() const
{
    return my_cpf;
}

void MyAccount::setMy_cpf(const size_t &value)
{
    my_cpf = value;
}

std::string MyAccount::getBank_name() const
{
    return bank_name;
}

void MyAccount::setBank_name(const std::string &value)
{
    bank_name = value;
}

int MyAccount::getBank_num_account() const
{
    return bank_num_account;
}

void MyAccount::setBank_num_account(int value)
{
    bank_num_account = value;
}

int MyAccount::getBank_num_agency() const
{
    return bank_num_agency;
}

void MyAccount::setBank_num_agency(int value)
{
    bank_num_agency = value;
}

double MyAccount::getBank_balance() const
{
    return bank_balance;
}

void MyAccount::setBank_balance(double value)
{
    bank_balance = value;
}

std::string MyAccount::getMy_name() const
{
    return my_name;
}

void MyAccount::setMy_name(const std::string &value)
{
    my_name = value;
}

// Default Constructor
MyAccount::MyAccount(std::string my_name, size_t my_cpf) {
    this->my_name = my_name; // Data of client
    my_sexo = ""; // Data of client
    my_idade = 0; // Data of client
    this->my_cpf = my_cpf; // Data of client

    bank_name = ""; // Data of bank
    bank_num_account = 0; // Data of bank
    bank_num_agency = 0; // Data of bank

    bank_balance = 0; // Data of bank values
}

void MyAccount::PrintState()
{
    std::cout << "Printing all states \n" << std::endl;
    std::cout << "Client Name: " << my_name << std::endl;
    std::cout << "Client Sexo: " << my_sexo << std::endl;
    std::cout << "Client Age: " << my_idade << std::endl;
    std::cout << "Client CPF: " << my_cpf << std::endl;

    std::cout << "\nBank Name Bank: " << bank_name << std::endl;
    std::cout << "Bank Number Account: " << bank_num_account << std::endl;
    std::cout << "Bank Number Agency: " << bank_num_agency << std::endl;

    std::cout << "\nAccount Bank Name Bank: " << bank_name << "\n" << std::endl;
}


