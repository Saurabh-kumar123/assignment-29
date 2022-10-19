#include<iostream>
using namespace std;
class Dollar
{
     float r;
public:
      Dollar(){cout<<"default constractor Dollar class"<<endl;}
     Dollar(float r):r(r){cout<<"parameter constractor Dollar class"<<endl;}
     void setdata(float x)
     {
          r=x;
     }
     void display()
     {
          cout<<"Dollar display :  "<<r<<endl;
     }
     float getd()
     {
          return r;
     }
};
class Rupee
{
     float r;
public:
     Rupee(){cout<<"default Rupee class";}
     Rupee(float r):r(r){cout<<"parameter Rupee class";}
     void display()
     {
          cout<<"Rupee display : "<<r<<endl;
     }
     operator Dollar()
     {
          cout<<"\nDollar() from Rupee class"<<endl;
          Dollar d;
          d.setdata(r/100);
          return d;
     }
       Rupee(Dollar d)
       {
            cout<<"called Rupee(Dollar) from Rupee class"<<endl;
          r=d.getd()*100;
       }
};

  int main()
  {
       Rupee r = 23;
       Dollar d=Dollar(r);  // Rupee to Dollar
       r.display();
       d.display();

       cout<<endl;
       r=(Rupee)d; // constractor through
       d.display();
       r.display();

      return 0;
  }

