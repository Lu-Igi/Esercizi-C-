#include<iostream>
using namespace std;
int main ()
{
	int i,el,V[5];
	for (i=0;i<5;i++)
{
	cout<<"introduci l'elemento  ";
	cin>>el;
	V[i]=el;
}

for (i=0;i<5;i++)
{
cout<< "\t"<<V[i];
}
return 0;
}