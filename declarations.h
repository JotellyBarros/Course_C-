#ifndef DECLARATIONS_H
#define DECLARATIONS_H

class MyAccount
{
private:
    // Data of client
    std::string my_name_;
    std::string my_sexo_;
    int my_idade_;
    size_t my_cpf_;

    // Data of bank
    std::string bank_name_;
    int bank_num_account_;
    int bank_num_agency_;
    bool bank_status_;

    // Data of bank values
    double bank_balance_;

public:

    // Default Constructor
    MyAccount(std::string my_name_, size_t my_cpf_);

    void PrintState();
    void OpenAccount();
    void CloseAccount();
    void CashOutAccount(double value);
    void DepositAccount(double value);

    //Getts and Setters
    std::string getMy_name() const;
    void setMy_name(const std::string &value);

    std::string getMy_sexo() const;
    void setMy_sex(const std::string &value);

    int getMy_idade() const;
    void setMy_idade(int value);

    size_t getMy_cpf() const;
    void setMy_cpf(const size_t &value);

    std::string getBank_name() const;
    void setBank_name(const std::string &value);

    int getBank_num_account() const;
    void setBank_num_account(int value);

    int getBank_num_agency() const;
    void setBank_num_agency(int value);

    double getBank_balance() const;
    void setBank_balance(double value);
};

#endif // DECLARATIONS_H
