#include<iostream>
using namespace std;
struct student
{
    string name;
    int grade[5];
    void setInfo()
    {
        cout<<"Enter your name : ";
        getline(cin,name);
        for(int i=0;i<5;i++)
        {
            cout<<"Enter your subject grade no "<<i+1<<" : ";
            cin>>grade[i];
        }
        cin.ignore();
    }
    void showInfo()
    {
        int sum=0;
        cout<<"Student's name : "<<name<<endl;
        for(int i=0;i<5;i++)
        {
            sum+=grade[i];
        }
        float avg=float(sum)/5;
        cout<<"Average grade : "<<avg<<endl;
    }
};
int main()
{
    student report[3];
    for(int i=0;i<3;i++)
    {
        report[i].setInfo();
        cout<<"______________________"<<endl;
    }
     for(int i=0;i<3;i++)
    {
        report[i].showInfo();
        cout<<"______________________"<<endl;
    }
}
