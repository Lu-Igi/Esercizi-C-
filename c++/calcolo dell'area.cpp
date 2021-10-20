#include<iostream>
using namespace std;
int main ()
{
	int a,b,r,risp;
	float area=0;
	cout<<"inserire i lati o il raggio (a,b,r ) \n";
	cout<<"primo lato ";
	cin>>a;
	cout<<"secondo lato ";
	cin>>b;
	cout<<"raggio ";
	cin>>r;
	cout<<"\n quale area vuoi calcolare ? \n";
	cout<<"1) Triangolo \n";
	cout<<"2) Quadrato \n";
	cout<<"3) Rettangolo \n";
	cout<<"4) Cerchio \n";
	cin>> risp;
	if (risp==1) area=(a*b) /2;
	if (risp==2) area=a*a;
	if (risp==3) area=a*b;
	if (risp==4) area=r*r*3,144444444;
	cout<<"Il risultato e' "<<area<<"\n";
}