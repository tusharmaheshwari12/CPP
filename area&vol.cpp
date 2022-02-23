#include<iostream>
using namespace std;
class Measure{
    public:
    float length,width,heigth;
    
    void setInput(float a,float b,float c){
        length=a;
        width=b;
        heigth=c;
    }
    
    float area(){
        return length*width;
    }
    float volume(){
        return (length*width*heigth);
    }
    
};
int main()
{
    int choice;
    float x,y,z;
    Measure obj1;
    Measure obj2;
    cout<<"Enter 1 to calculate area\nEnter 2 to calculate volume\n";
    cin>>choice;
    if (choice==1)
    {
        z=1;
        cout<<"Enter Length\n";
        cin>>x;
        cout<<"Enter Width\n";
        cin>>y;
        obj1.setInput(x,y,z);

        cout<<"Area = " <<obj1.area();    
    }
    else
    {
        cout<<"Enter Length\n";
        cin>>x;
        cout<<"Enter Width\n";
        cin>>y;
        cout<<"Enter heigth\n";
        cin>>z;
        obj2.setInput(x,y,z);

        cout<<"Volume = " <<obj2.volume();    
        
    }
    
    return 0;
}
