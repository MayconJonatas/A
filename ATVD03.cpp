#include <iostream>
#include <vector>

class ListaPersonalizada {
private:
    std::vector<int> lista;

public:
    
    void inserirTamanhoAtual() {
        int tamanho = lista.size();
        lista.push_back(tamanho);
    }

   
    void exibirLista() {
        for (int elemento : lista) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    ListaPersonalizada minhaLista;

    
    minhaLista.inserirTamanhoAtual();
    minhaLista.inserirTamanhoAtual();
    minhaLista.inserirTamanhoAtual();

    
    minhaLista.exibirLista();

    return 0;
}

