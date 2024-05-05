#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
public:
    void setInfo(string name,int roll)
    {
        this->name=name;
        this->roll=roll;
    }
    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return roll;
    }
    void showInfo()
    {
        cout<<"Name : "<<getName()<<endl;
        cout<<"Roll : "<<getRoll()<<endl;
    }
};
int main()
{
    student st;
    st.setInfo("John",2);
    st.showInfo();
}
