#include <iostream>
#include <vector>

int main()
{
    //Definição das linhas e colunas
    size_t no_of_rows = 0, no_of_col = 0;
    int initial_value = 0;

    //Declaração do vetor de vetores
    std::vector < std::vector < int > > matrix(no_of_rows, std::vector< int >(no_of_col,initial_value));

    //Inicialização de um vetor row para inserção.
    std::vector<int> row;

    //Add elemento a row
    row.push_back(2);
    row.push_back(5);
    row.push_back(7);
    matrix.push_back(row);

    //Apaga elementos da row
    row.clear();

    //Add elemento a row
    row.push_back(3);
    row.push_back(6);
    row.push_back(8);
    matrix.push_back(row);

    //Apaga elementos da row
    row.clear();

    //Add elemento a row
    row.push_back(4);
    row.push_back(7);
    row.push_back(9);
    matrix.push_back(row);

    for ( const std::vector<int> &v : matrix ){
        for ( int x : v ) {
            std::cout << '[' << x << ']';
        }
        std::cout << std::endl;
    }

    return 0;
}
