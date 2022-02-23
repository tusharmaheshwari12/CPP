//Copy Constructor
#include<iostream>
using namespace std;

class A{
  public:
            int i=0;

            //PARAM CONSTRUCTOR
            A(int x,int y){
                cout<<"Inside Parameterized Constructor "<<endl<<endl;
                i=x+y;
                cout<<"Value of i is "<<i<<endl;
            }
            
            
            //COPY CONSTRUCTOR
            A(A &ob1){
                 cout<<"\nInside Copy Constructor "<<i<<endl<<endl;
                i=ob1.i;
                
            }
};

int main()
{
    A ob1(5,10);
    A ob2(ob1);
    
    return 0;
}
