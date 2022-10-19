#include<iostream>
using namespace std;
class Rupee
{
     int r;
public:
     Rupee(){}
     Rupee(int r):r(r){}
     operator int()
     {
          cout<<"int() called from Rupee class :  ";
          return r;
     }
};
  int main()
  {
       Rupee r=20;
       int x=r;
       cout<<x;
       return 0;
  }
