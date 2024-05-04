#include<iostream>
using namespace std;
struct employee
{
    string name,phone;
    int age;
    string time,location,position;
    void setInfo1()
    {
        name="Onim";
        age=21;
        phone="01822706981";
        time="12-5 PM";
        location="Gazipur";
        position="Student";
    }
    void setInfo2()
    {
        name="Siam";
        age=21;
        phone="01949775323";
        time="12-5 PM";
        location="Sylhet";
        position="Cr";
    }
    void showInfo1()
    {
        cout<<"Details of "<<name<<endl;
        cout<<"Your name : "<<name<<endl;
        cout<<"Your age : "<<age<<endl;
        cout<<"Your phone number : "<<phone<<endl;
        cout<<"Time : "<<time<<endl;
        cout<<"Your location : "<<location<<endl;
        cout<<"Your position : "<<position<<endl;

    }
    void showInfo2()
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
    x.setInfo1();
    y.setInfo2();
    x.showInfo1();
    y.showInfo2();
}
