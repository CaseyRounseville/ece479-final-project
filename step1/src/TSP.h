#ifndef TSP_H
#define TSP_H

#include "Graph.h"

#include <vector>

struct TSPResult {
    int totalCost;
    std::vector<char> path;
};

struct TSPResult tsp(Graph *graph, char startName);

#endif
