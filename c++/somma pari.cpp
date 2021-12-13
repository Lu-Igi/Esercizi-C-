#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	
	 srand(time(NULL));
	int som=0, i, V[100], n;	
	cout<<"Inserisci un numero ";
	cin>>n;
	float r;
	
	for(i=0;i<n;i++){
	V[i]=rand()%50;}
	
for(i=0;i<n;i++){

{
	r=V[i]%2;
	if(r==0)
	som=som+V[i];
	
	}
	cout<<"La somma e' " << som;	
}
	return 0;	
	
}