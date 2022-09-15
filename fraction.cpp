// 7. Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.

#include <iostream>
using namespace std;

class Fraction
{
private:
    long numerator, denominator;

public:
    Fraction()
    {
        numerator = 0;
        denominator = 0;
    }


    void operator++(){
        ++numerator;
        ++denominator;
    }

    void operator++(int){
        numerator++;
        denominator++;
    }


    friend istream& operator>>(istream&,Fraction&);
    friend ostream& operator<<(ostream&,Fraction&);
};

// ------ input ----
istream& operator>>(istream &input,Fraction &F){  
    cout<<"Numerator : ";
    cin>>F.numerator;
    cout<<"Denominator : ";
    cin>>F.denominator;
    return input;
}

// ------ output ----
ostream& operator<<(ostream &output,Fraction &F){   
 output<<F.numerator;
 output<<"/";
 output<<F.denominator;
 return output;
}

int main()
{
    Fraction f1,f2;
    cout<<"f1 "<<f1<<endl;
    cout<<"f2 "<<f2<<endl;
    cout<<"Enter 1st Fraction value"<<endl;
    cin>>f1;
    ++f1;
    cout<<"++f "<<" : "<<f1<<endl;
    f1++;
    cout<<"f++ "<<" : "<<f1<<endl;
    cout<<"Enter 2nd Fraction value"<<endl;
    cin>>f2;
    f1++;  
    cout<<"f1 : "<<f1<<endl;
    cout<<"f2 : "<<f2<<endl;
    ++f2;
    cout<<"f1 : "<<f1<<endl;
    cout<<"f2 : "<<f2<<endl;
    
    return 0;
}