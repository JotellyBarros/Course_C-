#include <iostream>
#include "declarations.h"

std::string MyAccount::getMy_sexo() const
{
    return my_sexo_;
}

void MyAccount::setMy_sex(const std::string &value)
{
    my_sexo_ = value;
}

int MyAccount::getMy_idade() const
{
    return my_idade_;
}

void MyAccount::setMy_idade(int value)
{
    my_idade_ = value;
}

size_t MyAccount::getMy_cpf() const
{
    return my_cpf_;
}

void MyAccount::setMy_cpf(const size_t &value)
{
    my_cpf_ = value;
}

std::string MyAccount::getBank_name() const
{
    return bank_name_;
}

void MyAccount::setBank_name(const std::string &value)
{
    bank_name_ = value;
}

int MyAccount::getBank_num_account() const
{
    return bank_num_account_;
}

void MyAccount::setBank_num_account(int bank_num_account)
{
    this->bank_num_account_ = bank_num_account;
}

int MyAccount::getBank_num_agency() const
{
    return bank_num_agency_;
}

void MyAccount::setBank_num_agency(int value)
{
    bank_num_agency_ = value;
}

double MyAccount::getBank_balance() const
{
    return bank_balance_;
}

void MyAccount::setBank_balance(double value)
{
    bank_balance_ = value;
}

std::string MyAccount::getMy_name() const
{
    return my_name_;
}

void MyAccount::setMy_name(const std::string &value)
{
    my_name_ = value;
}

// Default Constructor
MyAccount::MyAccount(std::string my_name, size_t my_cpf) {
    this->my_name_ = my_name; // Data of client
    my_sexo_ = ""; // Data of client
    my_idade_ = 0; // Data of client
    this->my_cpf_ = my_cpf; // Data of client

    bank_status_ = false;
    bank_name_ = ""; // Data of bank
    bank_num_account_ = 0; // Data of bank
    bank_num_agency_ = 0; // Data of bank

    bank_balance_ = 0; // Data of bank values
}

void MyAccount::OpenAccount(){
    bank_status_ = true;
}

void MyAccount::CloseAccount(){
    bank_status_ = false;
}

void MyAccount::DepositAccount(double value){
    bank_balance_ += value;
}

void MyAccount::CashOutAccount(double value){
    bank_balance_ -= value;
}

void MyAccount::PrintState()
{
    std::cout << "\n---------------------------------------------" << std::endl;
    std::cout << "Client Name: " << my_name_ << std::endl;
    std::cout << "Client Sexo: " << my_sexo_ << std::endl;
    std::cout << "Client Age: " << my_idade_ << std::endl;
    std::cout << "Client CPF: " << my_cpf_ << std::endl;

    std::cout << "\nBank Name Bank: " << bank_name_ << std::endl;

    std::string teste = (bank_status_ == true) ? "Account Enabled" : "Account Disabled";
    std::cout << "Bank Status: " << teste << std::endl;
    std::cout << "Bank Number Account: " << bank_num_account_ << std::endl;
    std::cout << "Bank Number Agency: " << bank_num_agency_ << std::endl;

    std::cout << "\nAccount Bank Balance: U$ " << bank_balance_ << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}


