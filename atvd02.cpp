#include <iostream>
#include <list>

void removeSegundoElemento(std::list<int> &minhaLista) {
   
    if (minhaLista.size() > 1) {
    
        std::list<int>::iterator it = minhaLista.begin();
        std::advance(it, 1); 

        
        minhaLista.erase(it);
    }
}

int main() {
    std::list<int> minhaLista = {1, 2, 3, 4, 5};

    std::cout << "Lista antes da remoção do segundo elemento: ";
    for (const int &valor : minhaLista) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    removeSegundoElemento(minhaLista);

    std::cout << "Lista após a remoção do segundo elemento: ";
    for (const int &valor : minhaLista) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}

