// include/graph.h

#ifndef GRAPH_H
#define GRAPH_H

typedef struct {
    int stop1;
    int stop2;
    int travel_time;
} Edge;

typedef struct {
    int num_stops;
    int num_edges;
    Edge* edges;
    int** adj_matrix;
} Graph;

Graph* create_graph(int num_stops, int num_edges);
void add_edge(Graph* graph, int stop1, int stop2, int travel_time);
void dijkstra(Graph* graph, int src, int dest);
void free_graph(Graph* graph);

#endif
