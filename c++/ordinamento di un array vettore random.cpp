#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
     srand(time(NULL));
	int i,J,V[100],app,n;
	cout<<"inserisci numero ";
	cin>>n;
	
	for(i=0;i<n;i++)
{
	V[i]=rand()%100;
	
	}
	for(i=0;i<n;i++)
{
	cout<<V[i]<<"\t";
	
	}
	{
	
	for(i=0;i<n-1;i++)
	for(J=i+1;J<n;J++)
	if (V[i]>V[J]){
	
	app=V[i];
	V[i]=V[J];
	V[J]=app;
	
	}
	
	}
	
	cout<<"\n";
		for(i=0;i<n;i++)
{
cout<<V[i]<<"\t";
	
	}
	return 0;
} 