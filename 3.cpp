#include<iostream>
using namespace std;
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
};
 class Item
 {
      int i,c;
 public:
      Item(){cout<<"default constractor"<<endl;}
     Item(Product p)
     {
          cout<<"called Item(product) from Item class"<<endl;
         i=p.geta();
         c=p.getb();
     }
     void display()
     {
          cout<<"Item class varible : "<<i<<","<<c<<endl;
     }
 };

  int main()
  {
       Item i1;
       Product p1;
       p1.setdata(3,6);
       p1.display();
       i1=Item(p1);
       i1.display();
       return 0;
  }
