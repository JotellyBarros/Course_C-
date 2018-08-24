#include "myaccount.h"
#include <iostream>

// Default Constructor
std::string MyAccount::name() const
{
    return name_;
}

void MyAccount::setName(const std::string &name)
{
    name_ = name;
}

std::string MyAccount::sexo() const
{
    return sexo_;
}

void MyAccount::setSexo(const std::string &sexo)
{
    sexo_ = sexo;
}

int MyAccount::idade() const
{
    return idade_;
}

void MyAccount::setIdade(int idade)
{
    idade_ = idade;
}

size_t MyAccount::cpf() const
{
    return cpf_;
}

void MyAccount::setCpf(const size_t &cpf)
{
    cpf_ = cpf;
}

int MyAccount::num_account() const
{
    return num_account_;
}

void MyAccount::setNum_account(int num_account)
{
    num_account_ = num_account;
}

int MyAccount::num_agency() const
{
    return num_agency_;
}

void MyAccount::setNum_agency(int num_agency)
{
    num_agency_ = num_agency;
}

bool MyAccount::bank_status() const
{
    return bank_status_;
}

void MyAccount::setBank_status(bool bank_status)
{
    bank_status_ = bank_status;
}

double MyAccount::bank_balance() const
{
    return bank_balance_;
}

void MyAccount::setBank_balance(double bank_balance)
{
    bank_balance_ = bank_balance;
}

std::string MyAccount::type_account() const
{
    return type_account_;
}

void MyAccount::setType_account(const std::string &type_account)
{
    type_account_ = type_account;
}

void MyAccount::OpenAccount()
{
    if (bank_status_ == true)
    {
        std::cout << "Client: " << name_ << ", is not possible open account, already open." << std::endl;
    }
    else
    {
        bank_status_ = true;
    }
}

void MyAccount::CloseAccount()
{
    if (bank_status_ == false)
    {
        std::cout << "Client: " << name_ << ", is not possible closed account, already closed." << std::endl;
    }
    else
    {
        bank_status_ = false;
    }
}

void MyAccount::DepositAccount(double value)
{
    if (bank_status_ == false)
    {
        std::cout << "Client: " << name_ << ", is not possible deposit in the account, Account closed." << std::endl;
    }
    else
    {
        bank_balance_ += value;
    }
}

void MyAccount::CashOutAccount(double value)
{
    if (bank_status_ == false)
    {
        std::cout << "Client: " << name_ << ", is not possible cash out in the account, Account closed." << std::endl;
    }
    else
    {
        bank_balance_ -= value;
    }
}

void MyAccount::PrintGenericInformations()
{
    std::cout << "\n---------------------------------------------" << std::endl;
    std::cout << "Client Name: " << name() << std::endl;
    std::cout << "Client Sexo: " << sexo() << std::endl;
    std::cout << "Client Age: " << idade() << " Years" << std::endl;
    std::cout << "Client CPF: " << cpf() << std::endl;
}

MyAccount::MyAccount(std::string name, size_t cpf)
    :MyBank()
{
    this->name_ = name; // Data of client
    this->cpf_ = cpf; // Data of client
    sexo_ = ""; // Data of client
    idade_ = 0; // Data of client
    bank_balance_ = 0; // Data of client
    bank_status_ = false;
}

//Static Method
void MyAccount::TransferCashAccount(double cash, MyAccount &value1, MyAccount &value2)
{
    if (value1.bank_balance() >= cash)
    {
        value1.CashOutAccount(cash);
        value2.DepositAccount(cash);

        std::cout << "Transfering Cash... U$ " << cash << std::endl;
        std::cout << "Agency: " << value1.num_agency() << " To " << value2.num_agency() << std::endl;
        std::cout << "Account: " << value1.num_account() << " To " << value2.num_account() << std::endl;
        std::cout << "Client Name: " << value1.name() << " To " << value2.name() << std::endl;
    }
    else
    {
        std::cout << "Not is possible Transfering Cash in the account, don't have Cash: " << value1.name() << std::endl;
    }
}
