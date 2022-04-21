#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"

#include <map>

class Graph {
    private:
        std::map<char, Node *> name2node;

    public:
        Graph();

        bool addNode(char name);
        bool isConnection(char name1, char name2);
        void makeConnection(char name1, char name2, int cost);
        int getConnectionCost(char name1, char name2);

        ~Graph();
};

#endif GRAPH_H
