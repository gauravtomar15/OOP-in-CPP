#include<iostream>
using namespace std;    

class Human{
    public:
    string name;
    int age;
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }
   
};
class Student : public Human{
    protected:
    string course;
    public:
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"------------------------------"<<endl;
    }
};
class Teacher : public Human{
    protected:
    string subject;
    public:
    Teacher(string name, int age, string subject) : Human(name, age){
        this->subject = subject;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"------------------------------"<<endl;
    }
};
int main()  {
    Teacher T1("Gaurav", 20, "Computer Science");
    T1.display(); // hierarchical inheritance from human class
    return 0;
}