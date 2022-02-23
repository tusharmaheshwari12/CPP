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
    
    int add(){
        return i1+i2;
    }
};
/*
int menu()
{
	

}
*/
int main()
{
    
    Calculator obj1;
    obj1.setInput(10,10);
    cout<<"The inputs: "<< obj1.i1 << " " << obj1.i2 << endl;
    cout<<"The sum of numbers = " <<obj1.add();
    return 0;
}
