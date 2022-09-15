// Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.

#include <iostream>
#include<fstream>
using namespace std;

class Time
{
private:
    int Hours, Minutes, Seconds;

public:
    Time()
    {
        Hours = 0;
        Minutes = 0;
        Seconds = 0;
    }

    int operator==(Time t)
    {
         if(Hours == t.Hours && Minutes == t.Minutes && Seconds == t.Seconds){
              return 1;
         }
         return 0;
    }
    
    

    friend istream& operator>>(istream &input,Time &t);
    friend ostream& operator<<(ostream &output,Time &t);
};

// ------ input ----
istream& operator>>(istream &input,Time &t){
      cout<<"Enter Hours : ";
      input>>t.Hours;
      cout<<endl;
      cout<<"Enter Minutes : ";
      input>>t.Minutes;
      cout<<endl;
      cout<<"Enter Seconds: ";
      input>>t.Seconds;
      cout<<endl;
      return input;
}

// ------ output ----
ostream& operator<<(ostream &output,Time &t){   
 output<<"Hours : "<<t.Hours<<endl;
 output<<"Minutes : "<<t.Minutes<<endl;
 output<<"Seconds : "<<t.Seconds<<endl;
 return output;
}

int main()
{
    Time t,t1;
    cout<<"Enter First Time"<<endl;
    cout<<"------------------"<<endl;
    cin>>t;
    cout<<"First Time"<<endl;
    cout<<t<<endl;

    cout<<"Enter Second Time"<<endl;
    cout<<"------------------"<<endl;
    cin>>t1;
    cout<<"Second Time"<<endl;
    cout<<t1;

    if(t1 == t)
      cout<<"Times are same"<<endl;
    else
      cout<<"Times are not same"<<endl;   

    return 0;
}