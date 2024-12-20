#include <iostream>
#include "grafo.cpp"

int main() {
    // Creazione di un oggetto grafo che gestisce stringhe come nodi
    Grafo<std::string> grafo;

    // **Aggiunta dei nodi al grafo**
    // I nodi rappresentano città italiane
    grafo.aggiungiNodo("TRIESTE");
    grafo.aggiungiNodo("TARANTO");
    grafo.aggiungiNodo("BOLZANO");
    grafo.aggiungiNodo("AUGUSTA");
    grafo.aggiungiNodo("FROSINONE");

    // **Aggiunta degli archi**
    // Gli archi rappresentano distanze (in chilometri) tra le città
    grafo.aggiungiArco("TRIESTE", "TARANTO", 1049);
    grafo.aggiungiArco("TARANTO", "BOLZANO", 1035);
    grafo.aggiungiArco("BOLZANO", "AUGUSTA", 1458);
    grafo.aggiungiArco("AUGUSTA", "TRIESTE", 1487);
    grafo.aggiungiArco("TARANTO", "AUGUSTA", 532);
    grafo.aggiungiArco("TRIESTE", "FROSINONE", 734);

    // **Stampa iniziale del grafo**
    // Viene mostrata la matrice di adiacenza con tutti i nodi e archi aggiunti
    std::cout << "Grafo iniziale:\n";
    grafo.stampa();

    // **Visualizzazione dei nodi adiacenti**
    // Mostra i nodi collegati al nodo "TRIESTE" con i relativi pesi
    grafo.nodiAdiacenti("TRIESTE");

    // **Ricerca dell'arco minimo**
    // Trova e stampa l'arco con il peso minimo che parte dal nodo "TARANTO"
    grafo.arcoMinimo("TARANTO");

    // **Rimozione di un arco**
    // Rimuove l'arco che collega "TARANTO" a "BOLZANO"
    grafo.rimuoviArco("TARANTO", "BOLZANO");

    // **Stampa del grafo dopo la rimozione dell'arco**
    // Mostra lo stato del grafo dopo la rimozione dell'arco
    std::cout << "\nGrafo dopo la rimozione dell'arco TARANTO → BOLZANO:\n";
    grafo.stampa();

    // **Rimozione di un nodo**
    // Rimuove il nodo "BOLZANO" e tutti i suoi collegamenti
    grafo.rimuoviNodo("BOLZANO");

    // **Stampa del grafo dopo la rimozione del nodo**
    // Mostra lo stato del grafo dopo la rimozione del nodo "BOLZANO"
    std::cout << "\nGrafo dopo la rimozione del nodo BOLZANO:\n";
    grafo.stampa();

    return 0;
}


/* GRAFO IDEALE
NODI:
	•	Trieste
	•	Taranto
	•	Bolzano
	•	Augusta
	•	Frosinone

ARCHI (con distanze):
	•	Trieste → Taranto: 1049 km
	•	Taranto → Bolzano: 1035 km
	•	Bolzano → Augusta: 1458 km
	•	Augusta → Trieste: 1487 km
	•	Taranto → Augusta: 532 km
	•	Trieste → Frosinone: 734 km
*/

