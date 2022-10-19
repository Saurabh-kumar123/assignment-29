#include<iostream>
using namespace std;
class Dollar
{
     int r;
public:
      Dollar(){cout<<"default constractor"<<endl;}
     Dollar(int r):r(r){cout<<"parameter constractor"<<endl;}
     void display()
     {
          cout<<"Dollar class :  "<<r<<endl;
     }
};
  int main()
  {
       int x=50;
       Dollar d;
       d=x;
       d.display();
       return 0;
  }

