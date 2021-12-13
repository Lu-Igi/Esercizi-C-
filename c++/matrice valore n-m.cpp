/*Data una matrice 5x5 di interi e due numeri interi n e m verificare se tutte le celle della matrice hanno valori copresi tra n e m. Aggiungi valoro logico*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	srand(time(NULL));
	/* 5x5 Grandezza della tabella*/
	int mat [5][5],i,j,n,m;	
	for(int i=0;i<5; i++)
	{
		for(j=0;j<5;j++)
		{
			mat[i][j]=rand()%15;
		}
	}
	for(i=0;i<5; i++)
	{
		for(int j=0;j<5;j++)
		{
		cout<<mat[i][j] <<"\t";		
		}
		cout<<"\n";
	}
	cin>>n>>m;
	
		
		if(n<mat[i][j])
		{
			if(m>mat[i][j])
			{
				cout<<"La condizione e' verificata ";
			}
			
		
			else
			{
				cout<<"La condizione non e' verificata";
			}
		}
					
					
	
	return 0;
	}