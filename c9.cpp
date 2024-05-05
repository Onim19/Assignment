#include<iostream>
using namespace std;
class Complex
{
public:
    void sum(float r1,float r2,float i1,float i2)
    {
        if(i1+i2>0)
        {
            cout<<"Summation of 2 complex number : "<<r1+r2<<"+"<<i1+i2<<"i"<<endl;//formula
        }
        else if(i1+i2<0)
        {
            cout<<"Summation of 2 complex number : "<<r1+r2<<i1+i2<<"i"<<endl;
        }
        else if(i1+i2==0)
        {
            cout<<"Summation of 2 complex number : "<<r1+r2<<endl;
        }
        else
        {
            cout<<"Summation of 2 complex number : "<<i2+i2<<"i"<<endl;
        }
    }
        void diff(float r1,float r2,float i1,float i2)
    {
        if(i1-i2>0)
        {
            cout<<"Diference of 2 complex number : "<<r1-r2<<"+"<<i1-i2<<"i"<<endl;//formula
        }
        else if(i1-i2<0)
        {
            cout<<"Difference of 2 complex number : "<<r1-r2<<i1-i2<<"i"<<endl;
        }
        else if(i1-i2==0)
        {
            cout<<"Difference of 2 complex number : "<<r1-r2<<endl;
        }
        else
        {
            cout<<"Difference of 2 complex number : "<<i2-i2<<"i"<<endl;
        }
    }
    void product(float r1,float r2,float i1,float i2)
    {
        if((r1*i2-i1*r2)>0)
        {
            cout<<"The product of 2 complex number : "<<(r1*r2-i1*i2)<<"+"<<(r1*i2-i1*r2)<<"i"<<endl;//formula
        }
        else if((r1*i2-i1*r2)<0)
        {
            cout<<"The product of 2 complex number : "<<(r1*r2-i1*i2)<<(r1*i2-i1*r2)<<"i"<<endl;
        }
        else if((r1*i2-i1*r2)==0)
        {
            cout<<"The product of 2 complex number : "<<(r1*r2-i1*i2)<<endl;
        }
        else
        {
            cout<<"The product of 2 complex number : "<<(r1*i2-i1*r2)<<"i"<<endl;
        }
    }
};
int main()
{
    float u,v;
    cout<<"Enter the 1st complex number's real part value : ";
    cin>>u;
    cout<<"Enter the 1st complex number's imaginary part value : ";
    cin>>v;
    float x,y;
    cout<<"Enter the 2nd complex number's real part value : ";
    cin>>x;
    cout<<"Enter the 2nd complex number's imaginary part value : ";
    cin>>y;
    Complex c3;
    c3.sum(u,x,v,y);c3.diff(u,x,v,y);c3.product(u,x,v,y);
}
