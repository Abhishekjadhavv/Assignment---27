// 5. Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// // methods
// };
// Overload the operator unary minus (-) to negate the numbers.

#include <iostream>
using namespace std;

class Numbers
{

private:
    int x, y, z;

public:
    Numbers()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    void setData(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void display(){
      cout<<x<<" "<<y<<" "<<z<<endl;
    }

    Numbers operator-()
    {
        Numbers temp;
        temp.x = -x;
        temp.y = -y;
        temp.z = -z;
        return temp;
    }
};

int main()
{
    Numbers num1,num2;
    num1.setData(2,3,4);
    num2 = -num1;
    num1.display();
    num2.display();
    return 0;
}