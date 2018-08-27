#include<iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const &obj)
    {
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         cout << real << "+" << obj.real << " | " << imag << "+" << obj.imag << endl;

         return res;
    }

    void print(){cout << real << " , " << imag << endl;}
};

int main()
{
    Complex c1(10, 5);
    Complex c2(2, 2);
    Complex c3(1, 3);
    Complex c4(3, 4);

    Complex c5 = c1 + c2 + c3 + c4; // An example call to "operator+"
    c5.print();
}
