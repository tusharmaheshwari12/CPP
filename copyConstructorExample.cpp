#include<iostream>
using namespace std;

class demo{
  public:
            int m,n;
  public:
            
            demo(int x,int y){
                m=x;
                n=y;
                cout<<"Para const: ";
            }
            
            demo(demo &x){
                m=x.m;
                n=x.n;
                 cout<<"\ncopy const: ";

                
            }
};

int main()
{
    demo ob1(5,10);
    demo ob2(ob1);
    return 0;
}
