// C++ program to demonstrate operator overloading

#include<iostream>
using namespace std;    

class Complex{
    int real;
    int imag;
    public:
    Complex(int r , int i){
        this->real=r;
        this->imag=i;
    }
    Complex(){

    }
    void display(){
        cout<<real<<" i"<<imag<<endl;
    }
    Complex operator + (Complex &c){
        Complex ans;
        ans.real=this->real+c.real;
        ans.imag=this->imag+c.imag;
        return ans;
    }
};
int main(){
    Complex C1(5, 10), C2(3, 6);
    Complex C3=C1+C2;
    C3.display();
   return 0;
}