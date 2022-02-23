#include <iostream>
using namespace std;

class Demo
{
private:
static int count; //static
public:
void getcount()
{
    cout<<"cout = "<< ++ count;
}
};
    
int Demo ::count;
int main() 
{
    Demo d1,d2,d3;
    d1.getcount();
    d2.getcount();
    d3.getcount();
	return 0;
}
