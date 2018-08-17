#include <iostream>
#include <string>

int main()
{
    // Using string
    // Declaring of variables
    std::string str_nome;
    std::string str_sobrenome;
    std::string str_nome_sobrenome;

    // Coping a new value
    str_nome = "Jotelly";
    str_sobrenome = "Barros";

    // Concatenates str_nome whit str_sobrenome
    str_nome_sobrenome = str_nome + " " + str_sobrenome;

    // Printing the str_nome_sobrenome
    std::cout << str_nome_sobrenome << std::endl;

    // Size total of str_nome_sobrenome
    std::cout << str_nome_sobrenome.size() << " Carácter" << std::endl;

    // Return the position of value passed
    size_t found = str_nome_sobrenome.find("o");
    //std::cout << found << std::endl;

    // Return the first position of value passed
    std::string search = "lly";
    found = str_nome_sobrenome.find(search);

    // Use of replacing for change the variable 'o'
    str_nome_sobrenome.replace(1,1,"ó"); //size_t pos, size_t len, const string
    std::cout << str_nome_sobrenome << std::endl;

    // Use of replacing for change the word 'Barros' -> 'Oliveira'
    str_nome_sobrenome.replace(9,6,"Oliveira"); //size_t pos, size_t len, const string
    std::cout << str_nome_sobrenome << std::endl;

//    search 3; found 4;
//    for (found; found-search.size() <= search.size(); ++found) {
//        std::cout << str_nome_sobrenome[found] << std::endl;
//    }

    return 0;
}
