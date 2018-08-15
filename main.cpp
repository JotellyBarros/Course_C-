#include <iostream>
#include <vector>
#include <map>

int main()
{
    std::vector<int> myvector_1d;
    size_t i = 0;

    myvector_1d.push_back(2);
    myvector_1d.push_back(4);
    myvector_1d.push_back(6);
    myvector_1d.push_back(8);

    while (!myvector_1d.empty()) {
        std::cout << "Valor do vetor 1D [" << i << "] = " << myvector_1d[i] << std::endl;
        i++;
        myvector_1d.pop_back();
    }

    return 0;
}
