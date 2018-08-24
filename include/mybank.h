#ifndef COURSE_C_INCLUDE_MYBANK_H
#define COURSE_C_INCLUDE_MYBANK_H
#include <iostream>

class MyBank
{
private:
    // Data of bank
    std::string bank_name_;
    size_t bank_cnpj_;

public:
    // Default Constructor
    MyBank();

    std::string bank_name() const;
    void setBank_name(const std::string &bank_name);
    size_t bank_cnpj() const;
    void setBank_cnpj(const size_t &bank_cnpj);
};

#endif // COURSE_C_INCLUDE_MYBANK_H
