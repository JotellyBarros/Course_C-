#ifndef DECLARATIONS_H
#define DECLARATIONS_H

class MyAccount
{
private:
    // Data of client
    std::string my_name;
    std::string my_sexo;
    int my_idade;
    size_t my_cpf;

    // Data of bank
    std::string bank_name;
    int bank_num_account;
    int bank_num_agency;

    // Data of bank values
    double bank_balance;

public:

    // Default Constructor
    MyAccount(std::string my_name, size_t my_cpf);

    void PrintState();

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
