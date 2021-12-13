#include <iostream>
 
using namespace std;
 
int main()
{
    int scelta;
    cout << "Inserisci un numero che va da 1 a 7. Verra' mostrato in output il giorno corrispondente." << endl;
    cin >> scelta;
    switch(scelta)
    {
    case 1:
        cout << "Lunedi" <<endl;
        break;
    case 2:
        cout << "Martedi" <<endl;
        break;
    case 3:
        cout << "Mercoledi" <<endl;
        break;
    case 4:
        cout << "Giovedì" <<endl;
        break;
    case 5:
        cout << "Venerdi" <<endl;
        break;
    case 6:
        cout << "Sabato" <<endl;
        break;
        case 7:
        	cout <<"Domenica" <<endl;
        	break;
    }
}