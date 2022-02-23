//Default Argument
#include<iostream>
using namespace std;

int cubevol(int l=5,int w=6,int h=7)
    {
        return  l*w*h;
    }

int main()
{
    cout<<cubevol()<<endl;
    cout<<cubevol(9)<<endl;
    cout<<cubevol(15,12)<<endl;
    cout<<cubevol(3,4,7)<<endl;
    return 0;
}
