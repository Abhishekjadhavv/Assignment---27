// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };

#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3];

public:
    void setMatrix()
    {
        cout << "Enter Matrix Element (3*3)" << endl;
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void showData()
    {
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                cout<<a[i][j]<<"   ";
            }
            cout<<endl;
        }
    }
    void operator-(){
         for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
              a[i][j] = -a[i][j];   
            }
        }
    }
};

int main()
{
    Matrix M1;
    M1.setMatrix();
    cout<<"Matrix is :"<<endl;
    M1.showData();
    -M1;
    cout<<"Matrix is :"<<endl;
    M1.showData();
}