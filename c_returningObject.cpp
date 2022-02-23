//Returning object
#include<iostream>
using namespace std;

class Calculator{
  public:
        int input1;
        int input2;
  
        void setInput(int a,int b){
            input1=a;
            input2=b;
        }
        
        Calculator add(Calculator ob1,Calculator ob2){
            Calculator ob3;
            ob3.input1=ob1.input1+ob2.input1;
            ob3.input2=ob1.input2+ob2.input2;
            return ob3;
        }
};

int main()
{
    Calculator ob1,ob2,ob3;
    ob1.setInput(10,2);
    ob2.setInput(5,5);
    ob3=ob1.add(ob1,ob2);
    
    cout<<"Result:"<<ob3.input1<<" "<<ob3.input2;
    return 0;
}
