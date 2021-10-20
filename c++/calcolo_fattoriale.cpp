#include <iostream>

using namespace std;

int main ()
{
	int num,p=1,i=0,n;
	cout<<"Inserire il numero corrispondente a quanti elementi andranno elaborati con il calcolo fattoriale   ";
	cin>>n;
	i=0;
	do
	{
		
		do
		{
			cout<<"Introduci i numeri della serie  ";
			cin>>num;
		} while (num==0);
		p=p*num;
		i++;
} while(i<n);
cout<<"il risultato e   "<<p;
}