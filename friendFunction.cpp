#include <iostream>
using namespace std;

class A
{
private:
 int numA;
public:
 void setA(){
    cout<<"Inside setA()"<<endl;
 }
};
    
class B
{
private:
 int numB;
public:
friend void add(B);          //friend function
 void setB(){               //member function
    cout<<"Inside setB()"<<endl;
    numB=10;   
 }
};    

void add(B ob){
    cout<<"Inside add()"<<endl;
    ob.numB=10;
}
    
int main() 
{
    B ob;
    ob.setB();
	add(ob);

	return 0;
}
