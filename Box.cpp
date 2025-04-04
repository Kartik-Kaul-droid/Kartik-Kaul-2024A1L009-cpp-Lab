/* Program to calculate volume of box using parameterized constructor*/
#include <iostream>
using namespace std;

class volume

{
public:
    volume(float length, float breadth, float height)

    {
        int res = length * breadth * height;
        cout << "The Volume of cube is " << res;
    }
};

int main()
{
    float length, breadth, height;

    cout << "Enter length \n";
    cin >> length;
    cout << "enter breadth \n";
    cin >> breadth;
    cout << "enter heigth ";
    cin >> height;
    volume obj(length, breadth, height);
}
