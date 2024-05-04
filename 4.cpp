#include<iostream>
using namespace std;
struct book
{
    string title,author;
    float price;
    void setInfo()
    {
        static int i=1;
        cout<<"Input details of book "<<i<<endl;
        cout<<"Book title : ";
        getline(cin,title);
        cout<<"Author name : ";
        getline(cin,author);
        cout<<"Price : ";
        cin>>price;
        cin.ignore();
        i++;
    }
    void showInfo()
    {
        static int i=1;
        cout<<"Displaying details of book "<<i<<endl;
        cout<<"Book title : "<<title<<endl;
        cout<<"Author name : "<<author<<endl;
        cout<<"Price :"<<price<<"$"<<endl;
        i++;
    }
};
int main()
{
    book detail[2];
    for(int i=0;i<2;i++)
    {
        detail[i].setInfo();
        cout<<"__________________"<<endl;;
    }
    for(int i=0;i<2;i++)
    {
        detail[i].showInfo();
        cout<<"___________________"<<endl;
    }
}
