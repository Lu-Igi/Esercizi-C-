#include <iostream>
#include <ctime>
#include <cstdlib>
/*Generazione di numeri da zero a cinquanta*/
using namespace std;
int main ()

{
    srand (time (NULL)) ;
    int x,i;
    float som=0, m=0;
    char risp;
	do
	{
		som=0;
		m=0;
		for (i=0;i<50; i++)
	{
		x=rand () %100+1;
		cout<<"\t"<<x;
		som=som+x;
	}
	m=som/50;
	cout<<"la media e' "<<m<<"\n";
	cin>>risp;
}while (risp=='s');
	system ("pause");
	
	}