//Inline Function
#include<iostream>
using namespace std;


inline int cube(int s){
    cout<<"Inside the function"<<endl;
    return(s*s*s);
}

int main(){
    cout<<"Cube"<<cube(5)<<endl;
    return 0;
} 
