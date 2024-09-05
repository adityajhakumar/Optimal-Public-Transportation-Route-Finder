// tests/test_graph.c
#include <stdio.h>
#include "graph.h"

int main() {
    Graph* graph = create_graph(5, 6);

    add_edge(graph, 0, 1, 10);
    add_edge(graph, 0, 2, 5);
    add_edge(graph, 1, 3, 1);
    add_edge(graph, 2, 1, 2);
    add_edge(graph, 2, 3, 9);
    add_edge(graph, 3, 4, 4);

    printf("Graph created and edges added successfully.\n");

    free_graph(graph);
    return 0;
}
