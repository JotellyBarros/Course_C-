#ifndef COURSE_C_INCLUDE_MYACCOUNT_H
#define COURSE_C_INCLUDE_MYACCOUNT_H
#include <mybank.h>
#include <iostream>

class MyAccount:public MyBank
{
private:
    // Data of client
    std::string name_;
    std::string sexo_;
    std::string type_account_;
    size_t cpf_;
    int idade_;
    int num_account_;
    int num_agency_;
    bool bank_status_;
    double bank_balance_;

public:

    // Default Constructor
    MyAccount(std::string name_, size_t cpf_);

    //Static Method
    static void TransferCashAccount(double cash, MyAccount& value1, MyAccount& value2);

    // Virtual Polimorphysm
    virtual void PrintState() = 0;

    void OpenAccount();
    void CloseAccount();
    void DepositAccount(double value);
    void CashOutAccount(double value);
    void PrintGenericInformations();

    std::string name() const;
    void setName(const std::string &name);
    std::string sexo() const;
    void setSexo(const std::string &sexo);
    int idade() const;
    void setIdade(int idade);
    size_t cpf() const;
    void setCpf(const size_t &cpf);
    int num_account() const;
    void setNum_account(int num_account);
    int num_agency() const;
    void setNum_agency(int num_agency);
    bool bank_status() const;
    void setBank_status(bool bank_status);
    double bank_balance() const;
    void setBank_balance(double bank_balance);
    std::string type_account() const;
    void setType_account(const std::string &type_account);
};

#endif // COURSE_C_INCLUDE_MYACCOUNT_H
