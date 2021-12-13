#include <iostream>
using namespace std;

int main ()
/*switch*/
{
	float a, b, ris;
	char operatore;

	cout<<"Qual e' il primo numero?"<<endl;
	cin>>a;
	cout<<"Qual e' l'operatore(+, -, * o /)?"<<endl;
	cin>>operatore;
	cout<<"Qual e' il secondo numero?"<<endl;
	cin>>b;

	switch (operatore) {
		case '+': ris=a+b;
		break;
		case '-': ris=a-b;
		break;
		case '*': ris=a*b;
		break;
		case '/': if (b!=0)
				ris=a/b;
			   else 
				cout <<"Non si puo' dividere per zero!";
		break;
		default: cout <<"Il carattere non e' riconosciuto";
	}
	cout<<a<<operatore<<b<<"="<<ris;
	return 0;
}