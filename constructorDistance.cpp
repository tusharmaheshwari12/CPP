/*
CONSTRUCTOR (HOME WORK) 
DATE -- 19/02/2022
*/
#include<iostream>
using namespace std;

class Distance{
  public:
            float feet,inch;
  public:
           
            //PARAM CONSTRUCTOR
            Distance(float x,float y){
                cout<<"Inside Parameterized Constructor "<<endl;
                feet=x;
                inch=y;
            }
};

int main()
{
    Distance dis1(6.12,14.111);

    cout<<"Values of Feet: "<<dis1.feet<<"  "<<"Values of Inch: "<<dis1.inch<<" "<<endl;
    return 0;
}
