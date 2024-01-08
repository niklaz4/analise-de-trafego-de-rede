#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Função para simular a captura de pacotes de rede
void capturarPacotes() {
    // Simula a captura de 10 pacotes de rede
    for (int i = 1; i <= 10; ++i) {
        cout << "Pacote " << i << " capturado." << endl;
    }
}

// Função para analisar pacotes de rede
void analisarPacotes() {
    cout << "Analisando pacotes de rede..." << endl;

    // Simula uma análise 
    srand(static_cast<unsigned>(time(nullptr)));
    int pacotesSuspeitos = rand() % 5; // Gera um número aleatório de pacotes suspeitos

    if (pacotesSuspeitos > 0) {
        cout << "Alerta! Detectados " << pacotesSuspeitos << " pacotes suspeitos." << endl;
    } else {
        cout << "Nenhum pacote suspeito detectado." << endl;
    }
}

int main() {
    // Captura de pacotes
    capturarPacotes();

    // Análise de pacotes
    analisarPacotes();

    return 0;
}
