#include<iostream>
using namespace std;
class Complex
{
private:
     int c;
public:
     Complex(){cout<<"default constractor"<<endl;}
     Complex(int c)
     {
          cout<<"parameter constractor"<<endl;
          this->c=c;
     }
     void display()
     {
          cout<<"Compelx class variable :  "<<c<<endl;
     }

};
   int main()
   {
        Complex c1;
        int x=5;
        c1=x;
        c1.display();
        return 0;
   }
