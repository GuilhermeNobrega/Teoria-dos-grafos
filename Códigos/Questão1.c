1)

#include <stdio.h>

#define NUM_VERTICES 3
#define NUM_ARESTAS 3

// Função para descrever o grafo
void descreverGrafo(int grafo[NUM_VERTICES][NUM_VERTICES]) {
    int ordem = NUM_VERTICES; // número de vértices nele.
    int tamanho = NUM_ARESTAS; //tamanho de um grafo é o número de arestas que ele contém.

    printf("Ordem do grafo: %d vertices\n", ordem);
    printf("Tamanho do grafo: %d arestas\n", tamanho);

    printf("Grau de cada vertice:\n");
    for(int i = 0; i < NUM_VERTICES; i++) {
        int grau = 0;
        for (int j = 0; j < NUM_VERTICES; j++) {
            if (grafo[i][j] == 1) {
                grau++;
            }
        }
        printf("Vertice %d: %d\n", i, grau);
    }
}

int main() {
    int grafo[NUM_VERTICES][NUM_VERTICES] = {0};

    // Adicionando arestas
    grafo[0][1] = 1;
    grafo[1][0] = 1; // Grafo não direcionado

    grafo[0][2] = 1;
    grafo[2][0] = 1; // Grafo não direcionado

    grafo[1][2] = 1;
    grafo[2][1] = 1; // Grafo não direcionado

    descreverGrafo(grafo);

    return 0;
}

