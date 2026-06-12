#include<iostream>
using namespace std;

class Person{
   public:
   void personInfo(){
       cout<<"This is a person."<<endl;
   }
};
class Male : public Person{
    public:
    void maleInfo(){
        cout<<"This is a  male."<<endl; 
    }
}; 
class Female : public Person{
    public:
    void femaleInfo(){
        cout<<"This is a  female."<<endl; 
    }
}; 
class Student : public Male, public Female {
    public:
    
    Student(string name, int age){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    void studentInfo(){
        cout<<"This is a Student."<<endl; 
    }
};    

int main(){
    Student S1("Gaurav", 20);
    S1.studentInfo(); // hybrid inheritance
    S1.maleInfo(); // inherited from Person class through both Male and   Female
    S1.femaleInfo(); // inherited from Person class through both Male and   Female
    return 0;
}