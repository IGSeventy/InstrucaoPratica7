#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero, original, soma = 0, digitos = 0;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    original = numero;


    while (original != 0) {
        original /= 10;
        digitos++;
    }

    original = numero; 


    while (original != 0) {
        int digito = original % 10;
        soma += pow(digito, digitos);
        original /= 10;
    }

    if (soma == numero) {
        cout << numero << " é um número de Armstrong." << endl;
    } else {
        cout << numero << " não é um número de Armstrong." << endl;
    }

    return 0;
}