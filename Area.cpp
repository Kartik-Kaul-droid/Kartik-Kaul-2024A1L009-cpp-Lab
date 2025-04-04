/* Write a program to print the area of a rectangle by creating a class  named 'Area' having two functions.  
First function named as'setDim'takes the length and breadth of the rectangle as parameters 
and the second function named as 'getArea' returns the area of the rectangle.
Length and breadth of the rectangle are entered through keyboard.
*/
# include <iostream>
using namespace std;
class Area
{
   float length,breadth;
 
public:void setDim(float l,float b)//Formal Parameters
{
    length=l;
    breadth=b;
   }
 

public:void getArea()
{
cout<<"\n area of rectangle :"<< length * breadth;
}
};
int main()
{
    float length,breadth;
    cout<< "Enter length and breadth";
    cin>> length >> breadth;
    Area obj;
    obj.setDim(length,breadth);
    obj.getArea();

}
