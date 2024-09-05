// src/graph.c
#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

// Function to create a graph
Graph* create_graph(int num_stops, int num_edges) {
    Graph* graph = (Graph*) malloc(sizeof(Graph));
    graph->num_stops = num_stops;
    graph->num_edges = num_edges;
    graph->edges = (Edge*) malloc(num_edges * sizeof(Edge));

    // Initialize the adjacency matrix
    graph->adj_matrix = (int**) malloc(num_stops * sizeof(int*));
    for (int i = 0; i < num_stops; i++) {
        graph->adj_matrix[i] = (int*) malloc(num_stops * sizeof(int));
        for (int j = 0; j < num_stops; j++) {
            if (i == j) {
                graph->adj_matrix[i][j] = 0;
            } else {
                graph->adj_matrix[i][j] = 100000; // Use a large number to represent infinity
            }
        }
    }

    return graph;
}

// Function to add an edge
void add_edge(Graph* graph, int stop1, int stop2, int travel_time) {
    graph->adj_matrix[stop1][stop2] = travel_time;
    graph->adj_matrix[stop2][stop1] = travel_time; // Assuming undirected graph
}

// Function to free the graph
void free_graph(Graph* graph) {
    for (int i = 0; i < graph->num_stops; i++) {
        free(graph->adj_matrix[i]);
    }
    free(graph->adj_matrix);
    free(graph->edges);
    free(graph);
}
