/*Somma tutte le matrice in un elemento*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int mat[5][5],mat1[5][5],matsom[5][5],i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			mat[i][j]=rand()%50;
		}
	}

	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			mat1[i][j]=rand()%50;
		}
		
	}
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			matsom[i][j]+mat1[i][j]+mat[i][j];
			cout<<matsom[i][j]<<"\t";
		}
		cout<<"\n";
	}

return 0;
}