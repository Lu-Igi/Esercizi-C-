#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{srand(time(NULL));
int i,v[50],p=0,num;
for (i=0;i<50;i++)
float som=som*v[i];
cout<< v[i]
cin>> num;
{
v[i]=rand()%100;
}
for (i=0;i<50;i++)
{
cout<<"\t"<<v[i];
}
cout<<"\n inserisci un numero da cercare ";
cin>>num;
for (i=0; i<50;i++)
{
if (v[i]==num) p=i;
}

cout<<"l'elemento " <<num<<"è stato trovato alla posizione "<<p<<"\n";
system ("pause");
}