#include<iostream>
using namespace std;    

class Engineer{
    public:
    string specialization;
    void work(){
        cout<<"Engineer is working on "<<specialization<<endl;
    }
};
class Youtuber{
    public:
    string channelName;
    void createContent(){
        cout<<"Youtuber is creating content for "<<channelName<<endl;
    }
};
class TechEnthusiast : public Engineer, public Youtuber{
    public:
    TechEnthusiast(string specialization, string channelName){
        this->specialization = specialization;
        this->channelName = channelName;
    }
    void display(){
        cout<<"Tech Enthusiast is interested in "<<specialization<<" and has a YouTube channel named "<<channelName<<endl;
    }
};

int main(){
    TechEnthusiast T1("Computer Science", "Padho with Gaurav");
    T1.display(); // multiple inheritance from both Engineer and Youtuber classes
    T1.work();  // inherited from Engineer class
    T1.createContent();  // inherited from Youtuber class
    return 0;
}