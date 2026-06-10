/*This program defines a Customer class with static data members to keep track of the total number of customers
and the total balance of all customers. It includes member functions for displaying customer information, depositing money,
and withdrawing money. The main function creates two Customer objects, displays their information,
performs some transactions, and then displays the static information about total customers and total balance.  */

#include<iostream>
using namespace std;

class Customer{
    string name;
    int account_no;
    int balance;
    static int total_customers; // static data member to keep track of total customers
    static int total_balance; // static data member to keep track of total balance of all customers
    public:

    Customer(string name , int account_no , int balance){
        this->name=name;
        this->account_no=account_no;
        this->balance=balance;
        total_customers++; // increment the static member when an object of the class is created
        total_balance += balance; // add the balance of the new customer to the total balance
    }
     static void display_static_info(){
        cout<<"Total Customers: "<<total_customers<<endl;
        cout<<"Total Balance: "<<total_balance<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account No: "<<account_no<<endl;
        cout<<"Balance: "<<balance<<endl;
        // cout<<"Total Balance: "<<total_balance<<endl;
        // cout<<"Total Customers: "<<total_customers<<endl;
        cout<<"-----------------------------"<<endl;    
    }
    void deposit(int amount){
        balance += amount;
        total_balance += amount; // update the total balance when a customer deposits money
    }
    void withdraw(int amount){
        if(amount > balance){
            cout<<"Insufficient balance!"<<endl;
        } else {
            balance -= amount;
            total_balance -= amount; // update the total balance when a customer withdraws money
        }
    }
};
int Customer::total_customers = 0; // initializing static data member
int Customer::total_balance = 0; // initializing static data member


int main(){
    Customer A1("Gaurav Tomar", 1, 1000);
    Customer A2("Sourav", 2, 2000);
    A1.display();
    A2.display();
    A1.deposit(500);
    A2.withdraw(1000);
    Customer ::display_static_info(); // calling static member function using class name
    return 0;
}