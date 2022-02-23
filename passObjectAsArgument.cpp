#include<iostream>
using namespace std;

class Calculator{
  public:
        int i1;
        int i2;
  
        void setInput(int a,int b){
            i1=a;
            i2=b;
        }
        
        int add(Calculator ob1,Calculator ob2){
            
            return ob1.i1+ob2.i2;
        }
};

int main()
{
    Calculator ob1,ob2;
    ob1.setInput(10,2);
    ob2.setInput(5,5);

    
    cout<<"Result: "<<ob1.add(ob1,ob2);
    return 0;
}
