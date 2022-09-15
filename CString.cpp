// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.

#include <iostream>
using namespace std;

class CString
{
private:
    string str;

public:
    CString()
    {
        str = "";
    }

    void setData(string s1)
    {
        this->str = s1;
    }

    void showData()
    {
        cout << str << endl;
    }

    int operator==(CString s1)
    {
        if(str == s1.str){
           return 1;
        }
        return 0;
    }

    friend void operator+(CString &, CString &);
};

void operator+(CString &s, CString &s1)
{
    s.str = s.str + s1.str;
    s1.str = s.str;
}

int main()
{
    CString s1, s2;
    s1.setData("Abhishek");
    s2.setData("jadhav");
    cout<<"before concatenate"<<endl;
    s1.showData();
    s2.showData();
    s1 + s2;
    cout<<"After concatenate"<<endl;
    s1.showData();
    s2.showData();
    if(s1 == s2)
      cout<<"Same String"<<endl;
    else
      cout<<"Not same"<<endl; 
    return 0;
}