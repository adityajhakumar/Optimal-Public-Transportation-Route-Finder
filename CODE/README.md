# Optimal Public Transportation Route Finder

This project simulates an optimal route-finding program for public transportation in a city. Given a map of bus/train routes and stops, the program uses Dijkstra's algorithm to find the shortest path between two stops based on travel time.

## Files

- **bin/main.c**: The main program file.
- **include/graph.h**: Header file containing graph and algorithm function declarations.
- **src/graph.c**: Implements graph creation and edge addition.
- **src/dijkstra.c**: Implements Dijkstra's shortest path algorithm.
- **tests/**: Contains test files for the graph and Dijkstra's algorithm.

## Compilation

To compile the project, run the following command:

```bash
gcc bin/main.c src/graph.c src/dijkstra.c -I include -o routefinder
