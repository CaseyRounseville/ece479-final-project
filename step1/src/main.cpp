#include <iostream>

#include "Graph.h"
#include "TSP.h"

int main() {
    // create graph
    Graph graph;

    // add nodes
    graph.addNode('A');
    graph.addNode('B');
    graph.addNode('C');
    graph.addNode('D');
    graph.addNode('E');

    // make connections between nodes with costs
    graph.makeConnection('A', 'B', 10);

    // execute tsp
    // TODO

    // display results
    // TODO
    
    std::cout << "hello" << std::endl;
    return 0;
}
