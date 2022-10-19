#include<iostream>
using namespace std;
class Invent2
{
     int a,b;
public:
     Invent2(){cout<<"default Invent2"<<endl;}
     Invent2(int a,int b):a(a),b(b){cout<<"parameter Invent2"<<endl;}
     void setdata(int x,int y)
     {
          a=x;
          b=y;
     }
     void display()
     {
          cout<<"Invent2 display : "<<a<<","<<b<<endl;
     }
};
class Invent1
{
    int a,b;
    public:
         Invent1(){cout<<"default Invent1 "<<endl;}
         Invent1(int a,int b):a(a),b(b){cout<<"parameter Invent1"<<endl;}
         void display()
         {
              cout<<"Invent1 display : "<<a<<","<<b<<endl;
         }
         operator float()
         {
              cout<<"float() from Invent1 class :  ";
              return a+b;
         }
         operator Invent2()
         {
              cout<<"Invent2() from Invent1 class"<<endl;
              Invent2 i;
              i.setdata(a,b);
              return i;
         }
};
    int main()
    {
         Invent1 x(3,4);
         float z;
         z=x;
         cout<<z<<endl;
         x.display();
         Invent2 y;
         y=Invent2(x);
         y.display();
         return 0;
    }
