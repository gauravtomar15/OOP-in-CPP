
#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
     void data(string name , int age){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"------------------------------"<<endl;
     }
};
class Employee : public Person{
    protected:
    string company;
    public:
     void work(string name , int age , string company ){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"------------------------------"<<endl;
     }
};
class Manager : public Employee{
    string department;
    public:
    Manager(string name , int age , string company , string department){
        this->name=name;
        this->age=age;
        this->company=company;
        this->department=department;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Department: "<<department<<endl;
     }
     void manage(){
         cout<<"Manager is managing the department of"<<" " <<department<<endl;
         cout<<"------------------------------"<<endl;
        
     }
    };
int main(){
    Manager M1("Gaurav", 20, "Tech Company", "IT"); 
    M1.manage();
    M1.work("Jai", 21, "Tech ");  // inherited from Employee class
    M1.data("Sourav", 20);   // inherited from Person class 
    return 0;
}