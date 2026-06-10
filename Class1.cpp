/* This program demonstrates the use of a parameterized constructor in C++.
 It defines a Student class with a parameterized constructor that initializes the name, age, and
 roll number of a student. The main function creates a Student object using the parameterized constructor 
 and displays the student's information. */

#include<iostream>  
using namespace std;    
class Student
{
    public:
    string name;
    int age;
    int roll_no;
    Student(string name , int age , int roll_no){
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        cout<<"Constructor called"<<endl;
        
    }
};
int main(){
    Student s1("John",20,101);
    cout<<"Name: "<<s1.name<<endl;
        cout<<"Age: "<<s1.age<<endl;       
        cout<<"Roll No: "<<s1.roll_no<<endl;
    // Student *s1=new Student;
    // s1.name="John";
    // s1.age=20;
    // s1.roll_no=101; 
    // cout<<"Name: "<<s1.name<<endl;
    // cout<<"Age: "<<s1.age<<endl;
    // cout<<"Roll No: "<<s1.roll_no<<endl;   
    // Student obj;
    // cout<< sizeof(obj)<<endl; 

    // (*s1).name="John";
    // (*s1).age=20;
    // (*s1).roll_no=101;
    // cout<<"Name: "<<s1->name<<endl;
    // cout<<"Age: "<<s1->age<<endl;
    // cout<<"Roll No: "<<s1->roll_no<<endl;
    
}