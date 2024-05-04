
#include<iostream>
using namespace std;
struct employee
{
    string name,phone;
    int age;
    string time,location,position;
    void setInfo(string name,int age,string phone,string time,string location,string position)
    {
        this->name=name;
        this->age=age;
        this->phone=phone;
        this->time=time;
        this->location=location;
        this->position=position;
    }
    void showInfo()
    {
        cout<<"Details of "<<name<<endl;
        cout<<"Your name : "<<name<<endl;
        cout<<"Your age : "<<age<<endl;
        cout<<"Your phone number : "<<phone<<endl;
        cout<<"Time : "<<time<<endl;
        cout<<"Your location : "<<location<<endl;
        cout<<"Your position : "<<position<<endl;

    }
};
int main()
{
    employee x,y;
    x.setInfo("Onim",21,"01822706981","12-5","Gazipur","Student");
    y.setInfo("Ayon",21,"01818392371","12-5","Sylhet","CR");
    x.showInfo();
    y.showInfo();
}
