// src/dijkstra.c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "graph.h"

int min_distance(int dist[], int visited[], int num_stops) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < num_stops; v++) {
        if (visited[v] == 0 && dist[v] <= min) {
            min = dist[v], min_index = v;
        }
    }
    return min_index;
}

void print_shortest_path(int dist[], int num_stops, int src, int dest) {
    printf("The shortest travel time from stop %d to stop %d is: %d minutes\n", src, dest, dist[dest]);
}

void dijkstra(Graph* graph, int src, int dest) {
    int num_stops = graph->num_stops;
    int dist[num_stops];  // Shortest distances from src
    int visited[num_stops];  // Visited array to mark processed stops

    // Initialize distances to infinity and visited array to false
    for (int i = 0; i < num_stops; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    dist[src] = 0;

    // Find shortest path for all stops
    for (int count = 0; count < num_stops - 1; count++) {
        // Pick the minimum distance stop from the unvisited stops
        int u = min_distance(dist, visited, num_stops);

        // Mark the picked stop as processed
        visited[u] = 1;

        // Update distance value of adjacent stops of the picked stop
        for (int v = 0; v < num_stops; v++) {
            if (!visited[v] && graph->adj_matrix[u][v] && dist[u] != INT_MAX && dist[u] + graph->adj_matrix[u][v] < dist[v]) {
                dist[v] = dist[u] + graph->adj_matrix[u][v];
            }
        }
    }

    // Print the shortest path
    print_shortest_path(dist, num_stops, src, dest);
}
