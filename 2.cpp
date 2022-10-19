#include<iostream>
using namespace std;
class  Complex
{
private:
     int a,b;
public:
     Complex(){cout<<"default constractor"<<endl;}
      void setdata(int a,int b)
      {
           this->a=a;
           this->b=b;
           cout<<"parameter constractor"<<endl;
       }
      void display()
      {
           cout<<"Complex class variable : "<<a<<","<<b<<endl;
      }
      operator int()
      {
           cout<<"called int() from Complex class : ";
           return a*b;
      }
};
   int main()
   {
        Complex c1;
        c1.setdata(3,6);
        c1.display();
        int x;
        x=c1;
        cout<<x;
        return 0;
   }
