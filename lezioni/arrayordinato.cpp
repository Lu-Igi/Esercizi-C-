#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int i,el,V[5],j,app;
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

for (i=0;i<4;i++)
{for (j=i+1;j<5;j++)
{if (V[i]>V[j]){

app=V[i];
V[i]=V[j];
V[j]=app;
}

}
}
for (i=0;i<5;i++)
{cout<<"\n"<<V[i]<<" \t";
}

system ("pause");



	return 0;
}
