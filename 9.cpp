#include<iostream>
using namespace std;
struct bankAccount
{
    string number,holder;
    float balance;
    void setInfo()
    {
        cout<<"Enter your account number : ";
        getline(cin,number);
        cout<<"Enter your name : ";
        getline(cin,holder);
        cout<<"Enter your balance : ";
        cin>>balance;
        option();
    }
    void option()
    {
        cout<<"Choose your action :\n1.Deposit\n2.Withdraw\n3.Display profile\n4.Exit"<<endl;
        cout<<"Your choice : ";
        int op;
        cin>>op;
        if (op==1)
        {
            deposit();
        }
        else if(op==2)
        {
            withdrawal();
        }
        else if(op==3)
        {
            display();
        }
        else if(op==4)
        {
            cout<<"Thank you for your support"<<endl;
        }
        else
        {
            cout<<"Invalid action"<<endl;
        }
    }
    void deposit()
    {
        float amount;
        cout<<"Enter your deposit amount : ";
        cin>>amount;
        balance+=amount;
        cout<<"Updated Balance : "<<balance<<endl;
        cout<<"___________________________"<<endl;
        option();
    }
    void withdrawal()
    {
        float amount;
        cout<<"Enter your withdrawal amount : ";
        cin>>amount;
        if(balance>amount && balance-amount>=500)
        {
            balance-=amount;
            cout<<"Updated Balance : "<<balance<<endl;
            cout<<"___________________________"<<endl;
        }
        else
        {
            cout<<"You have not sufficient balance"<<endl;
            cout<<"___________________________"<<endl;
        }
        option();
    }
    void display()
    {
        cout<<"Your account details : "<<endl;
        cout<<"Account number : "<<number<<endl;
        cout<<"Account holder : "<<holder<<endl;
        cout<<"Balance : "<<balance<<endl;
        cout<<"___________________________"<<endl;
        option();
    }
};
int main()
{
    bankAccount detail;
    detail.setInfo();
}
