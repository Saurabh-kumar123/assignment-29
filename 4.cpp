#include<iostream>
using namespace std;
class Item
 {
      int i,c;
 public:
      Item(){cout<<"default constractor"<<endl;}
       void setdata(int a,int b)
       {
            i=a;
            c=b;
       }
     void display()
     {
          cout<<"Item class varible : "<<i<<","<<c<<endl;
     }
 };
class Product
{
     int a,b;
public:
     Product(){cout<<"default constractor"<<endl;}
     void setdata(int a,int b)
     {
          this->a=a;
          this->b=b;
     }
     int geta()
     {
          return a;
     }
     int getb()
     {
          return b;
     }
     void display()
     {
          cout<<"product class varible : "<<a<<","<<b<<endl;
     }
       operator Item()
     {
          cout<<"called Item() from Product class"<<endl;
          Item i;
          i.setdata(a,b);
          return i;
     }
};


  int main()
  {
       Item i1;
       Product p1;
       p1.setdata(9,8);
       p1.display();
       i1=p1;
       i1.display();
       return 0;
  }

