#include <iostream>
using namespace std;

int main()
{ int n, num, cont=0;
float m=0, som=0;
cout <<"inserisci numeri ";
cin>>n;
do
{
cout<<"inserisci numeri";
cin>>num;
som=som+num;
cont++;
}while (cont<n);
cout<<som;
m=som/n;
cout<<"la media è "<<m<<"/n";
system ("pause") ;
return 0;
}