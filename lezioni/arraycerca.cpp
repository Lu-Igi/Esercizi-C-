#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main ()
{
	srand(time(NULL));
	int i,v[10],num;
	for (i=0;i<10;i++)
	{v[i]=rand()%50;	
	}
	cout<<"introduci un num ";
	cin>>num;
	 for (i=0;i<10;i++)
	 {if (v[i]==num) cout<<"trovato posizione "<<i;
	 }
	 
	 for (i=0;i<10;i++)
	 {cout<<" "<<v[i];
	 }
}
