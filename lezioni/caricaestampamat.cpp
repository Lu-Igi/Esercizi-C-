#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main ()
{
	srand(time(NULL));
	int i,j,mat [5][5];
	for (i=0;i<5;i++)
	{
	for (j=0;j<5;j++)
	{
		mat[i][j]=rand()%90;
	}
	
}

	for (i=0;i<5;i++)
	{
	for (j=0;j<5;j++)
	{
	cout<<	mat[i][j]<<"\t";
	}
	cout<<"\n";
	}
}
