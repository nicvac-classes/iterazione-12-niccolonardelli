#include <iostream>
using namespace std;

int main()
{
 float costomoto, risparmi, aggiunta, n;
 cout << "quanto costa la moto?" << endl;
 cin >> costomoto;
 n=0;
 while (risparmi<costomoto)
 {
    cout << "inserire nuovi risparmi" << endl;
    cin >> aggiunta;
    risparmi = risparmi + aggiunta;
    n=n+1;
    if (risparmi<costomoto)
    {
        cout << "in questo momento hai " << risparmi << "€" << endl;
        cout << "per poter comprare la moto ti servono ancora " << costomoto-risparmi <<"€";
    }
    else
    {
        cout << "in questo momento hai " << risparmi << "€" << endl;
        cout << "puoi comprare la moto" << endl;
    }
 }
 cout << "hai risparmiato denaro " << n << " volte" << endl;
 cout << "hai risparmiato un totale di " << risparmi << "€" << endl;
 if (risparmi-costomoto>0)
 {
    cout <<"dopo l'acquisto della moto avrai ancora " << risparmi-costomoto << "€" << endl;
 }
 else
 {

 }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
