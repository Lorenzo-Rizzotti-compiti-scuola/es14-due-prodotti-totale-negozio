#include <iostream>

using namespace std;

int main() {
    float prezzoProdotto1, prezzoProdotto2;

    cout << "Inserisci prezzo prodotto 1: ";
    cin >> prezzoProdotto1;
    cout << "Inserisci prezzo prodotto 2: ";
    cin >> prezzoProdotto2;

    //                                                                       Operazione ternaria per determinare il minore e applicarci lo sconto
    cout << "Il prezzo da pagare è " << prezzoProdotto1 + prezzoProdotto2 - ((prezzoProdotto1 < prezzoProdotto2 ? prezzoProdotto1 : prezzoProdotto2) * 50 /100);
    return 0;
}
