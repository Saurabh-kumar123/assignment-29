#include<iostream>
using namespace std;
class Time
{
     int a;
public:
     Time(int x)
     {
          cout<<"parameter Time class"<<endl;
          a=x*60;
     }
     void display()
     {
          cout<<"Time class display in second :  "<<a<<endl;
     }
};
   int main()
   {
        int duration;
        cout<<"Enter a time duration in minute :  ";
        cin>>duration;
        Time t1=duration;
        t1.display();
        return 0;
   }
