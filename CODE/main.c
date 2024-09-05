// bin/main.c
#include <stdio.h>
#include "graph.h"

int main() {
    int num_stops, num_edges;

    // Read the number of stops and routes from the user
    printf("Enter the number of stops and routes: ");
    scanf("%d %d", &num_stops, &num_edges);

    // Create the graph
    Graph* graph = create_graph(num_stops, num_edges);

    // Add routes (edges)
    for (int i = 0; i < num_edges; i++) {
        int stop1, stop2, travel_time;
        printf("Enter stop1, stop2, and travel time for route %d: ", i + 1);
        scanf("%d %d %d", &stop1, &stop2, &travel_time);
        add_edge(graph, stop1, stop2, travel_time);
    }

    // Define source and destination stops
    int src, dest;
    printf("Enter source and destination stops: ");
    scanf("%d %d", &src, &dest);

    // Find the shortest path using Dijkstra's algorithm
    dijkstra(graph, src, dest);

    // Free the graph memory
    free_graph(graph);

    return 0;
}
