#include<iostream>
using namespace std;
class area
{
    float a,b;
public:
    area(float a,float b)
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
    float returnArea()
    {
        float area=(float)getA()*getB();
        return area;

    }
};
int main()
{
       cout<<"Enter the breadth length of rectangle : " ;
       float u,v;
       cin>>u>>v;
       area rect(u,v);
       cout<<"The area of the rectangle : "<<rect.returnArea()<<endl;

}

