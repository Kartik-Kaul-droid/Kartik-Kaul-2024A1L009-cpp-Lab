# include <iostream>
using namespace std;
 class area{
    private:float res=0;float l1;float b;

   public :  area (float radius){
       res=3.14*radius*radius;
       cout<<"\n Area of circle is "<<res;



    }
   public :  area (float l,float h){
         res=0.5*l*h;
         cout<<"\n arear of triangle is "<<res;
    }
   public : area(){
         l1=6,b=9;
        res=l1*b;
        cout<<"Area of rectangle is "<<res;


    }


 };
 int main(){
  area obj1;
    area obj2(8);
    area obj3(8,9);
  return 0;


 }
