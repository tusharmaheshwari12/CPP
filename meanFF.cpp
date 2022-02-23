#include <iostream>
using namespace std;

class Base
{

 int a,b;
public:
 void get(){
    cout<<"Enter two values:"<<endl;
    cin>>a>>b;
 }
 friend float mean(Base ob);
};

float mean(Base ob){
    
    return float(ob.a+ob.b)/2;
}
    
int main() 
{
    Base ob;
    ob.get();
	cout<<"\n Mean Value is: "<<mean(ob);

	return 0;
}
