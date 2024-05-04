#include<iostream>
using namespace std;
struct employee
{
    string id,name;
    float salary;
    void setinfo()
    {
        static int i=1;
        cout<<"Enter details of employee - "<<i<<endl;
        cout<<"ID : ";
        getline(cin,id);
        cout<<"Your name : ";
        getline(cin,name);
        cout<<"Currant salary : ";
        cin>>salary;
        cin.ignore();
        i++;
    }
    void showinfo()
    {
        static int i=1;
        float insalary=(salary+(salary*((float)10/100)));
        cout<<"Details of employee - "<<i<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Old salary : "<<salary<<" TAKA"<<endl;
        cout<<"Salary increased by 10% : "<<insalary<<" TAKA"<<endl;
        i++;
    }
};
int main()
{
    employee detail[3];
    for(int i=0;i<3;i++)
    {
        detail[i].setinfo();
        cout<<"________________"<<endl;
    }
    for(int i=0;i<3;i++)
    {
        detail[i].showinfo();
        cout<<"________________"<<endl;
    }
}
