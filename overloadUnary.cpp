// Write a C++ program to overload unary operators that is increment and decrement.
#include <iostream>
using namespace std;

class Overload
{
private:
    int num;

public:
    Overload()
    {
        num = 0;
    }
    void operator++()
    {
        ++num;
    }
    void operator--()
    {
        --num;
    }
    int getNum(){
        return  num;
    }
};

int main()
{
    Overload O;
    cout<<O.getNum()<<endl;
    ++O;
    cout<<O.getNum()<<endl;
    ++O;
    cout<<O.getNum()<<endl;
    --O;
    cout<<O.getNum()<<endl;
    return 0;
}