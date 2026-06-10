/* This program demonstrates the use of different types of constructors in C++.
It defines a Customer class with a default constructor, a parameterized constructor, an overloaded constructor, and a copy constructor.
 The main function creates several Customer objects using different constructors and displays their information. */

#include<iostream>
using namespace std;

class Customer{
   
    string name;
    int account_no;
    int balance;

    public:
    // default constructor
    Customer(){
        name="Gaurav Tomar";
        account_no=123456789;
        balance=10000;
    }

    // parameterized constructor
    Customer(string name , int account_no , int balance){
        this->name=name;
        this->account_no=account_no;
        this->balance=balance;
    }

    // overloaded constructor
    Customer(string name , int account_no){
        this->name=name;
        this->account_no=account_no;
        this->balance=50;
    }
    // copy constructor
    Customer(Customer &c){
        name=c.name;
        account_no=c.account_no;
        balance=c.balance;
    }
    // inline constructor
    // inline Customer(string n,int a , int b) : name(n), account_no(a), balance(b) {
    //     cout<<"Inline constructor called"<<endl;
    // }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account No: "<<account_no<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"-----------------------------"<<endl;    
    }
};

int main(){
  Customer A1;  // default constructor
  Customer A2("Sourav", 123, 20000); // parameterized constructor
  Customer A3("vansh", 456); // overloaded constructor
  Customer A4(A3); // copy constructor
  Customer A5("Rudra", 789, 30000); // inline constructor
  A1.display();
  A2.display();
  A3.display();
  A4.display();
  A5.display();
}