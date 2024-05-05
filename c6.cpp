#include<iostream>
using namespace std;
class area
{
    float a,b;
public:
    void setDim(float a,float b)
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
    float getArea()
    {
        float area=(float)getA()*getB();
        return area;

    }
};
int main()
{
       area rect;
       cout<<"Enter the breadth length of rectangle : " ;
       float u,v;
       cin>>u>>v;
       rect.setDim(u,v);
       cout<<"The area of the rectangle : "<<rect.getArea()<<endl;

}
