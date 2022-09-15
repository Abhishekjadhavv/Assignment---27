// Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).

#include <iostream>
using namespace std;

class Mystring
{
private:
    char str[100];

public:
    void inputStr(char str1[])
    {
        for (int i = 0; str1[i]; i++)
        {
            str[i] = str1[i];
        }
    }

    void showStr(){
        cout<<str<<endl;
    }

    void operator!(){
        for(int i = 0;str[i];i++)
        {
               if(str[i]>='a' && str[i]<='z'){
                  str[i]-=32;
               }else{
                 str[i]+=32;
               }
        }
    }
};

int main()
{
    char str[100];
    cout << "Enter a string" << endl;
    cin.getline(str, 100);
    Mystring s;
    s.inputStr(str);
    s.showStr();
    !s;
    s.showStr();
}