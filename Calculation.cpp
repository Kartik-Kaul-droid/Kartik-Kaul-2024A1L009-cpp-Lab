/*wap to display addition , subraction , multiplication  and division of two integers on screen
declare class calculation
declare datta member num1 and num2 in private section
 write member function for initialize num1 and num2
 write member function for each operation*/

#include <iostream>
using namespace std;
class Calculation

{
private:
    float num1, num2;

public:
    void initialize()
    {
        cout << "enter num1\n";
        cin >> num1;
        cout << "enter num2\n";
        cin >> num2;
    }
    void addition()
    {
        cout << " \n addition of num1 and num2 is  " << num1 + num2;
    }
    void subraction()
    {
        cout << " \n subraction of num1 and num2 is  " << num1 - num2;
    }
    void multiplication()
    {
        cout << "\n multiplication of num1 and num2 is " << num1 * num2;
    }
    void division()
    {
        cout << " \ndivision of num1 and num2 is  " << num1 / num2;
    }
};

int main()
{
    Calculation obj;
    obj.initialize();
    obj.addition();
    obj.subraction();
    obj.multiplication();
    obj.division();
}
    
