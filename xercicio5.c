#include <stdio.h>

int main() {
    int ListaPenultimaPosicao {


    void inserirNaPenultimaPosicao(std::list<int>& lista, int elemento) {
        if (lista.size() <= 1) {
            return;
        }

        auto it = lista.end();
        --it;
        --it;
        lista.insert(it, elemento);
    }
};

int main() {
    std::list<int> minhaLista = {1, 2, 3, 4, 5};

    ListaPenultimaPosicao listaPenultima;
    listaPenultima.inserirNaPenultimaPosicao(minhaLista, 10);

    for (int elemento : minhaLista) {
    }

    return 0;
}
