/*Caricare una matrice 5x5 calcolare la media principale diagonale di un numero di riga nelle colonne*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	/* 5x5 Grandezza della tabella*/
	int i,j,mat[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			mat[i][j]=0;
			if(i==j)
			{
				mat[i][j]=1	;
			}
		}
	
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
	
}
