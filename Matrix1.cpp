// 10.Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).

#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3];

public:
    void setMatring()
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
                cout << a[i][j] << "   ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix m1)
    {
        Matrix temp;
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                temp.a[i][j] = a[i][j] + m1.a[i][j];
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1,m2,m3;
    m1.setMatring();
    m2.setMatring();
    m3 = m1 + m2;
    m1.showData();
    cout<<endl;
    m2.showData();
    cout<<endl;
    m3.showData();
    cout<<endl;
    return 0;
}