#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	srand(time(NULL));
	int i, j, mat [5][5], num, n, p;
	for(i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			mat[i][j]=rand()%90;
		}
	}
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			cout<<mat[i][j] <<"\t";
		}
		cout<<"\n";
}
	cout<<"Inserire il numero da trovare  ";
	cin>>num;
	for(i=0; i<5; i++)
	{
	for (j=0; j<5; j++)
	{
		if(mat[i][j==num])
		{
			cout<<"\n L'elemento  " <<num<<"e' stato trovato alla posizione "<<i<<"  "<<j<<"\n";
		}}}
		system ("pause");
		}