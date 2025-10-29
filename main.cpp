#include <iostream>
#include <ctime>

using namespace std;

int dado1, dado2, dado3, dado4;

int lanciaDado() {
    return random() %6 + 1;
}

void vincitore() {
    if ((dado1+dado2)>(dado3+dado4)) {
        cout << endl << "ha vinto il giocatore 1!";
    } else if ((dado1+dado2)<(dado3+dado4)) {
        cout << endl << "ha vinto il giocatore 2!";
    } else {
        cout << endl << "pareggio";
    }
}

int main() {
    srand(time(NULL));
    dado1 = lanciaDado();
    dado2 = lanciaDado();
    dado3 = lanciaDado();
    dado4 = lanciaDado();

    cout << "somma giocatore 1: " << dado1+dado2;
    cout << endl << "somma giocatore 2: " << dado3+dado4;
    vincitore();
}