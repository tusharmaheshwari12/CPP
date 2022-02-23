#include <iostream>
using namespace std;
class B;
class A
{
private:
 int numA;
public:
void add(B ob,A ob1);
 void setA(){
    cout<<"Inside setA()"<<endl;
 }
};
    
class B
{
private:
 int numB;
public:
friend void A :: add(B,A);          //friend function
 void setB(){               //member function
    cout<<"Inside setB()"<<endl;
    numB=10;
     
 }
 
};    

void A :: add(B ob,A ob1){
    cout<<"Inside add()"<<endl;
    ob.numB=10;
}
    
int main() 
{
    B ob;
    A ob1;
    ob.setB();
	ob1.add(ob,ob1);

	return 0;
}
