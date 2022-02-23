#include<iostream>
using namespace std;

int vol(int x=1,int y=5,int z=10)
    {
	x=x++;
	y=y-1;
	z=z+x;
        return  x*y*z;
    }

int main()
{

cout<<"vol(10)"<<vol(10)<<endl; 
cout<<"vol(5,5)"<<vol(5,5)<<endl;
cout<<"vol(5,5,5)"<<vol(5,5,5)<<endl;
return 0;
}
