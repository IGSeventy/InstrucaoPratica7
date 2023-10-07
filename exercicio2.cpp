#include <iostream>

using namespace std;

int main() {
    int numero, reverso = 0, original, digito;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    original = numero;

    while (numero > 0) {
        digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    if (original == reverso) {
        cout << original << " é um número palíndromo." << endl;
    } else {
        cout << original << " não é um número palíndromo." << endl;
    }

    return 0;
}