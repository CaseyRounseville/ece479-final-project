#ifndef TSP_H
#define TSP_H

#include <vector>

struct TSPResult {
    int totalCost;
    std::vector<char> path;
};

struct TSPResult tsp(char startName);

#endif
