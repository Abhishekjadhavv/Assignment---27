// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

#include <iostream>
using namespace std;

class Complex
{
private:
    int R, I;

public:
    Complex()
    {
        R = 0;
        I = 0;
    }
    void setData(int r, int i)
    {
        R = r;
        I = i;
    }
    void displayData()
    {
        cout << R << "  " << I << "i" << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.R = R + c.R;
        temp.I = I + c.I;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.R = R - c.R;
        temp.I = I - c.I;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.R = R * c.R;
        temp.I = I * c.I;
        return temp;
    }

    int operator==(Complex c)
    {
        if (R == c.R && I == c.I)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    Complex c1, c2, c3, c4, c5;
    // ----- set data ---
    c1.setData(6, 7);
    c2.setData(6, 7);

    c3 = c1 + c2; // c1.operator+(c2);
    c4 = c1 - c2; // c1.operator-(c2);
    c5 = c1 * c2; // c1.operator*(c2);

    // ----- show data ----
    c3.displayData();
    c4.displayData();
    c5.displayData();

    if (c1 == c2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }

    return 0;
}