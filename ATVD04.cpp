#include <stdio.h>
#include <vector>

class ListaNumeros {
private:
    std::vector<int> lista;

public:
    
    void inserirNumerosAteN(int N) {
        for (int i = 1; i <= N; i++) {
            lista.push_back(i);
        }
    }

   
    void exibirLista() {
        for (int elemento : lista) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    ListaNumeros minhaLista;

    int N;
    std::cout << "Digite um número N: ";
    std::cin >> N;

    minhaLista.inserirNumerosAteN(N);

    std::cout << "Lista de números de 1 até " << N << ":" << std::endl;
    minhaLista.exibirLista();

    return 0;
}

