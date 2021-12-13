#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*algoritmi di un ordinamneto*/
int main()
{
	srand(time(NULL));
	
  const short size = 20;
  int elementi[size],i,j;

  //popoliamo l'array elementi con valori casuali compresi tra 3 e 99 ( estremi inclusi )
  for(int i = 0; i< size; i++)
    elementi[i] = rand() % 100 + 3;

  cout << "Pre ordinamento\n";
  for( i=0;i<size;i++)
      cout << elementi [i] << " ";
  cout << endl;

  // inizio bubblesort
  for(int i = 0; i< size -1; i++)
      for( int j = 0; j< size - 1 - i; j++)
          if( elementi[j] > elementi[ j + 1])
            swap( elementi[j], elementi[ j + 1]);
  // fine bubblesort

  cout << "Post ordinamento\n";
  for( i=0; i<size;i++)
      cout << elementi [i] << " ";
	cout << endl;


  return 0;
} 