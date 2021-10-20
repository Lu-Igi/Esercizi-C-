#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{srand(time(NULL));
int i,v[50],p=0,num;
float som=0,m;
p=0;
for(i=0;i<50;i++)
{
v[i]=rand()%100;
}
for (i=0;i<50;i++)
	{som=som+v[i];
	cout<<"\t"<<v[i];
	}
	cout<<"\n Inserisci un numero da cercare ";
cin>>num;
for (i=0;i<50;i++)
{
if (v[i]==num) p=i;
}
cout<<"L'elemento"<<num<<"è stato trovato alla posizione " <<p<<"\n"; 
system ("pause");
m=som/50;
cout<<"\n la media è "<<m;
}

