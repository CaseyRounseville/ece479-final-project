#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"

#include <map>

class Graph {
    private:
        // map node names to node pointers
        std::map<char, Node *> name2node;

    public:
        Graph();

        bool isNode(char name);
        bool addNode(char name);
        bool isConnection(char name1, char name2);
        bool makeConnection(char name1, char name2, int cost);
        int getConnectionCost(char name1, char name2);

        ~Graph();
};

#endif GRAPH_H
