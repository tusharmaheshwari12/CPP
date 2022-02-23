#include<iostream>
using namespace std;

class A{
  public:
            int i=0;
 
            //PARAMETERIZED CONSTRUCTOR
            A(int x,int y){
                cout<<"Inside Default Constructor "<<endl<<endl;
                i=x+y;
                cout<<"Value of i is "<<i<<endl;
            }
            

};

int main()
{

    A ob1(5,10);

    
    return 0;
}
