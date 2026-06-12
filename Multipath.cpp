#include<iostream>
using namespace std; 

class Person{
    public:
    string name;
    void personInfo(){
        cout<<"This is a person."<<endl;
    }
};
class Engineer : public virtual Person{
    public:
    string specialization;
    void work(){
        cout<<"Engineer is working on "<<specialization<<endl;
    }
};
class Youtuber : public virtual Person{
    public:
    string channelName;
    void createContent(){
        cout<<"Youtuber is creating content for "<<channelName<<endl;
    }
};
class TechEnthusiast : public Engineer, public Youtuber{
    public:
        TechEnthusiast(string name, string specialization, string channelName){
            this->name = name;
            this->specialization = specialization;
            this->channelName = channelName;
        }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Tech Enthusiast is interested in "<<specialization<<" and has a YouTube channel named "<<channelName<<endl;
    }
};

int main(){
    TechEnthusiast T1("Gaurav", "Computer Science", "Padho with Gaurav");
    T1.display(); // accessing the name from Person class through virtual inheritance
    return 0;
}