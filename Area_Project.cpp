// Area_Project.cpp : Defines the entry point for the console application.
//


#include<iostream>
#include<math.h.>
#include<strstream>
#include <string>
using namespace std;


	class rectangle
{
public:
		
	float calc;
};
class circle
{
public:
	
	float calc;
};




float b;
float h;
float d;

int main()
{
string shape;
rectangle dim_area;
circle cirdim_area;
cout<<"Enter a shape, either a rectangle or a circle"<<shape<<endl;
getline(cin,shape);
if(shape=="rectangle")
{
cout<<"enter the base dimension..."<<b<<endl;
cin>>b;
cout<<"enter the height dimension"<<h<<endl;
cin>>h;
dim_area.calc=(b*h);
cout<<" The area of this rectangle is..."<<dim_area.calc<<endl;
}
else if(shape=="circle")
{
cout<<"enter the diameter"<<d<<endl;
cin>>d;
dim_area.calc=(3.14159*(d/2)*(d/2));
cout<<"The area of this circle is..."<<dim_area.calc<<endl;
}
else if(shape!="rectamgle"||shape!="circle")
{
	cout<<"What you have entered is not valid for this solver script!!"<<endl;
}
	return 0;
}

