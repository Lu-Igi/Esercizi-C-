#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
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
	cout<<"\t"<<V[i];
}


	return 0;
}
