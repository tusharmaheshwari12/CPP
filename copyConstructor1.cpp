//Copy Constructor
#include<iostream>
using namespace std;

class A{
  public:
            int i=0;
  public:
            
            //DEFAULT CONSTRUCTOR
            
            A()     //function name is same as class name and no return type
            {
                cout<<"Inside Default Constructor "<<i<<endl<<endl;
            }
            
    
            //PARAM CONSTRUCTOR
            A(int x,int y){
                cout<<"Inside Parameterized Constructor "<<endl<<endl;
                i=x+y;
                cout<<"Value of i is "<<i<<endl;
            }
            
            
            //COPY CONSTRUCTOR: can be called with objects as argument
            A(A &ob1){
                 cout<<"\nInside Copy Constructor "<<i<<endl<<endl;
                i=ob1.i;
            
            }
            void fun(A obj1,A obj2);
};
void A :: fun(A obj1,A obj2){
    cout<<"Inside the fun()"<<endl;
}
int main()
{
    A ob;
    A ob1(5,10);
    A ob2(ob1);
    ob.fun(ob,ob1);
    
    return 0;
}
