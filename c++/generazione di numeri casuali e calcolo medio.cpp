#include <iostream>
#include <ctime>
#include <cstdlib>
/*Generazione di numeri casuali e calcolo medio*/
using namespace std;
int main ()

{
	srand (time (NULL)) ;
    int x,n;
    char risp;
	do
	{
		cout<<"Inserisci il tuo range di numeri ";
		cin>> n;
		x=rand ()%n+1;
		cout<<"e' uscito ilnumero "<<x<<"\n";
		cout<<"Vuoi continuare s/n ? ";
		cin>>risp;
	} while (risp == 's');
	system ("pause");
}