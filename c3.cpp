#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
private:
    float a,b,c;
public:
    void setValue(float a,float b,float c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    float getA()
    {
        return a;
    }
    float getB()
    {
        return b;
    }
    float getC()
    {
        return c;
    }
    void showArea()
    {
       float s=(getA()+getB()+getC())/2.00;
       float area=sqrt(s*(s-getA())*(s-getB())*(s-getC()));
       cout<<"The parimeter of the triangle is : "<<s<<" unit "<<endl;
       cout<<"The area of Triangle : "<<area<<" unit square "<<endl;
    }
};
int main()
{
    triangle value;
    value.setValue(3,4,5);
    value.showArea();
}
