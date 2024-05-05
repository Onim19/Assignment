#include<iostream>
using namespace std;
class student
{
private:
    string name,phone,address;
    int roll;
public:
    void setInfo(string name,int roll,string phone,string address)
    {
        this->name=name;
        this->roll=roll;
        this->phone=phone;
        this->address=address;
    }
    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return roll;
    }
    string getPhone()
    {
        return phone;
    }
    string getAddress()
    {
        return address;
    }
    void showInfo()
    {
        cout<<"Name : "<<getName()<<endl;
        cout<<"Roll : "<<getRoll()<<endl;
        cout<<"Phone : "<<getPhone()<<endl;
        cout<<"Address : "<<getAddress()<<endl;
        cout<<"_____________________"<<endl;
    }
};
int main()
{
    student st1,st2;
    st1.setInfo("John",2,"01312345678","Gazipur");
    st2.setInfo("Sam",1,"01412345678","Savar");
    st1.showInfo();
    st2.showInfo();
}
