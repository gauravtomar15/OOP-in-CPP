#include<iostream>
#include<vector>
using namespace std;

class Animal{
    public:
   virtual void speak()=0; // pure virtual function
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Dog barks"<<endl;
    }
};
class Cat : public Animal{
    public:
    void speak(){
        cout<<"Cat meows"<<endl;
    }
};

int main(){
    Animal *ptr;
    vector<Animal*> animals;
    animals.push_back(new Dog()); 
    animals.push_back(new Cat());
    animals.push_back(new Dog()); 
    animals.push_back(new Cat());
    for(int i =0;i<animals.size();i++){
        ptr=animals[i];
        ptr->speak();
    }
}