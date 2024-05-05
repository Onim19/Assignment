#include<iostream>
using namespace std;
class rectangle
{
private:
    float a,b;
public:
    rectangle(float a,float b)
    {
        this->a=a;
        this->b=b;
    }
    float getA()
    {
        return a;
    }
    float getB()
    {
        return b;
    }
    void area()
    {
        static int i=1;
        float area=(float)getA()*getB();
        cout<<"The area of rectangle-"<<i<<" : "<<area<<endl;
        i++;
    }
};
int main()
{
    rectangle rec1(4,5);
    rectangle rec2(5,8);
    rec1.area();
    rec2.area();
}
