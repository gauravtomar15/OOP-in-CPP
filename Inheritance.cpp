#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
};
class Student : public Person{
    public:
    int roll_no;
    int marks;
     Student(string name , int age , int roll_no , int marks){    
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        this->marks=marks; 
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    Student S1("Gaurav", 20, 101, 85);
    S1.display();
    Person P1;
    return 0;
}