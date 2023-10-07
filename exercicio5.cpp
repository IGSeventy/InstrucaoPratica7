#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int numeroSecreto = rand() % 100 + 1; 
    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;
    cout << "Tente adivinhar o número secreto entre 1 e 100." << endl;

    do {
        cout << "Digite o seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite < numeroSecreto) {
            cout << "Palpite muito baixo. Tente novamente." << endl;
        } else if (palpite > numeroSecreto) {
            cout << "Palpite muito alto. Tente novamente." << endl;
        } else {
            cout << "Parabéns! Você acertou o número secreto (" << numeroSecreto << ") em " << tentativas << " tentativas." << endl;
        }
    } while (palpite != numeroSecreto);

    return 0;
}