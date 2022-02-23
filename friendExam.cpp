#include <iostream>
using namespace std;
class Square;
class Rectangle
{
private:
 int width=8,height=9;
public:
 friend void display(Rectangle,Square);
};


class Square
{
private:
 int side=9;
public:
 friend void display(Rectangle,Square);
};

void display(Rectangle r,Square s){
    
    cout<<"Rectangle:"<<r.width*r.height;
    cout<<"Square:"<<s.side*s.side;
    
}
    
int main() 
{
    Rectangle rec;
    Square sq;
    display(rec,sq);
    
	return 0;
}
