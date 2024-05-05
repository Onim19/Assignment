#include<iostream>
#include<cmath>
using namespace std;
struct point
{
    float x,y;
};
int main ()
{
   point in1,in2;
   cout<<"Enter x-coordinate of 1st point : ";
   cin>>in1.x;
   cout<<"Enter y-coordinate of 1st point : ";
   cin>>in1.y;
   cout<<"Enter x-coordinate of 2nd point : ";
   cin>>in2.x;
   cout<<"Enter y-coordinate of 2nd point : ";
   cin>>in2.y;
   float distance;
   distance= sqrt(((in2.x-in1.x)*(in2.x-in1.x))+((in2.y-in1.y)*(in2.y-in1.y));
   cout<<"The distance between 2 points is "<<distance<<" unit";
}
