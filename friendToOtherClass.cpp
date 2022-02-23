#include <iostream>
using namespace std;
class XYZ;
class ABC
{
private:
 int num1;
public:
 void setdata(){
     num1=10;
 }
 friend int add(ABC,XYZ);
};


class XYZ
{
private:
 int num2;
public:
 void setdata(){
    num2=25;
    
 }
 friend int add(ABC,XYZ);
};

int add(ABC obA,XYZ obX){
    
    return (obA.num1+obX.num2);
}
    
int main() 
{
    ABC obA;
    XYZ obX;
    obA.setdata();
    obX.setdata();
    cout <<" Sum : "  <<add(obA,obX);
	
	return 0;
}
