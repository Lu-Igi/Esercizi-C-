#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand (time(NULL));
	int i,r,el,n,m,x,V[50];
	cout<<"inserire il range   " ;
	cin>>r;
	for (i=0;i<50;i++)
	{
	
		//cout<<"introduci l'elemento  ";
		//cin>>el;
		V[i]=rand ()%r;
		
	}

for (i=0;i<50;i++)
{
	cout<<"\t"<<V[i];
}

cout<<"\n inserisci i due limiti\n";
cin>>n;
cin>>m;
for (i=0;i<50;i++){
	if (V[i]<=n|| V[i] <=m)
	{x=0;
	
	}
	else{
		x=1;
		
	}
}
	if(x==1){
		cout<<"proprieta' non verificata";
	}
	else{
		cout<<"proprieta' verificata";
	}

	return 0;
}
