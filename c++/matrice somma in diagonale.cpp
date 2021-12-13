#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int mat[5][5],j,i,som=0,som1=0;
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			mat[i][j]=rand()%5;
		}
	}
for(i=0;i<5;i++)
{
	for(j=0; j<5;j++)
	{
		cout<<mat [i][j]<<"\t";
	}
	cout<<"\n";
}
for(j=0;i<5;i++)
	{
		j=i;
		som=som+mat[i][j];
	}
	j=4;
	for (i=0; i<5; i++)
	{
		som1=som1+mat [1][j];
		j--;
	}
	
	if (som>som1)
	
	{
		cout<<"\n la maggiore e' la diagonale principale " <<som;
	}
	else
	{
		cout<<"\n la maggiore e' la diagonale principale " <<som1;
	}
	return 0;
	}
