#include<iostream>
using namespace std;
struct person
{
    string name,address;
    int age;
    void setInfo()
    {
        static int i=1;
        cout<<"Enter Person "<<i<<" details : "<<endl;
        cout<<"Name : ";
        getline(cin,name);
        cout<<"Age : ";
        cin>>age;
        cin.ignore();
        cout<<"Address : ";
        getline(cin,address);
        i++;
    }
    void showInfo()
    {
        cout<<"Details of "<<name<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Address : "<<address<<endl;
    }
};
int main()
{
    person x[3];
    for(int i=0;i<3;i++)
    {
        x[i].setInfo();
    }
    for(int i=0;i<3;i++)
    {
        x[i].showInfo();
    }
}
