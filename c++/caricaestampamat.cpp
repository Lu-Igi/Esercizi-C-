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
/*Cosa sono le matrici? "mat" Le matrici o Array sono bidimensionali con un insieme di coppie ordinate di numeri interi, pensiamo a una tabbella con due indici I J che rappresentano il numero della riga e della colonna della matrice.*/
/*Le matrici sono di due tipi "QUADRATA" che abbiamo utilizzato per questo sistema. E' quando il numero di righe e uguale a quello delle colonne
"RETTANGOLARE" E' quando il nimero della riga e differente da quello delle colonne. */
/*Per inizializzare le matrici viene utilizzato il ciclo for come per i vettori.La differenza è che per le matrici si utilizzano i cicli for annidati cioè unoo dentro l'altro */