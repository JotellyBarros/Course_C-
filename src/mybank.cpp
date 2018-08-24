#include "mybank.h"
#include <iostream>

std::string MyBank::bank_name() const
{
    return bank_name_;
}

void MyBank::setBank_name(const std::string &bank_name)
{
    bank_name_ = bank_name;
}

size_t MyBank::bank_cnpj() const
{
    return bank_cnpj_;
}

void MyBank::setBank_cnpj(const size_t &bank_cnpj)
{
    bank_cnpj_ = bank_cnpj;
}

MyBank::MyBank()
{
    bank_name_ = ""; // Data of bank
    bank_cnpj_ = 0; // Data of bank
}
