// This is a example of function overloading in C++ using polymorphism.


#include<iostream>
using namespace std;

class Area{
    public:
    int CalculateArea(int length, int breadth){
        return length * breadth;
    }
    int CalculateArea(int side){
        return side * side;
    }
    int CalculateArea(float radius){
        return 3.14 * radius * radius;
    }
};

int main(){
    Area A1 , A2 , A3;
   cout<<"Area of Rectangle: "<<A1.CalculateArea(5, 10)<<endl;
    cout<<"Area of Square: "<<A2.CalculateArea(4)<<endl;
    cout<<"Area of Circle: "<<A3.CalculateArea(3.5f)<<endl;

    return 0;
}