// Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.
#include <iostream>
using namespace std;

class Complex
{
private:
    int Real, Img;

public:
    Complex()
    {
        Real = 0;
        Img = 0;
    }

    void setData(int r, int i)
    {
        Real = r;
        Img = i;
    }

    void display()
    {
        cout << Real << " " << Img << "i"<<endl;
    }
    friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex c, Complex c1)
{
    Complex temp;

    temp.Real = c.Real + c1.Real;
    temp.Img = c.Img + c1.Img;

    return temp;
}

int main()
{
    Complex c1,c2,c3;
    c1.setData(5,6);
    c2.setData(4,8);
    c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}