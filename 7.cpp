#include<iostream>
using namespace std;
struct time
{
    int second,minute,hour;
    int convertHour(int s)
    {
        hour=s/3600;
        return hour;
    }
    int convertMin(int s)
    {
        int rem;
        rem=s%3600;
        minute=rem/60;
        return minute;
    }
    int convertSec(int s)
    {
        int rem1,rem2;
        rem1=s%3600;
        rem2=rem1%60;
        second=rem2;
        return second;

    }
};
int main()
{
    int second;
    time convert;
    cout<<"Enter time in second : ";
    cin>>second;
    convert.hour=convert.convertHour(second);
    convert.minute=convert.convertMin(second);
    convert.second=convert.convertSec(second);
    cout<<"Time in formate : "<<convert.hour<<" hours : "<<convert.minute <<" minutes : "<< convert.second <<" seconds ";
}
