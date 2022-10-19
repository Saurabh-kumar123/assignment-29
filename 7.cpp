#include<iostream>
using namespace std;
class Minute
{
private:
     int x;
   public:
       Minute(){x=0;cout<<"Minute default constractor"<<endl;}
        //Minute(int a,int b){cout<<"Minute parameter constractro"<<endl;}
        void setdata(int a)
        {
             x=a;
        }
        void display()
        {
             cout<<"Minute class display is : "<<x<<endl;
        }
};
class Time
{
private:
     int i,j;
   public:
        Time(){cout<<"Time default constractor"<<endl;}
        Time(int a,int b):i(a),j(b){cout<<"Time parameter constractro"<<endl;}
        void display()
        {
             cout<<"Time display is : "<<i<<":"<<j<<endl;
        }
        operator Minute()
        {
             cout<<"Minute() from Time class called"<<endl;
             Minute m;
             m.setdata(i*60+j);
             return m;
        }
};


  int main()
  {
       Time t1(2,30);
       t1.display();
       Minute m1;
       m1.display();
       m1=t1;
       t1.display();
       m1.display();
       return 0;
  }
