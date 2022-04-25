#include "Graph.h"

Graph::Graph() {}

bool Graph::isNode(char name) {
    return name2node.find(name) != name2node.end();
}

bool Graph::addNode(char name) {
    if (isNode(name)) {
        return false;
    }

    name2node.at(name) = new Node(name);
    return true;
}

bool Graph::isConnection(char name1, char name2) {
    // make sure both nodes exist
    if (!isNode(name1) || !isNode(name2)) {
        return false;
    }

    return name2node.at(name1)->isNeighbor(name2);
}

bool Graph::makeConnection(char name1, char name2, int cost) {
    // make sure both nodes exist
    if (!isNode(name1) || !isNode(name2)) {
        return false;
    }

    // get the nodes
    Node *node1 = name2node.at(name1);
    Node *node2 = name2node.at(name2);

    // make the connection both ways
    node1->addNeighbor(node2, cost);
    node2->addNeighbor(node1, cost);
    return true;
}

int Graph::getConnectionCost(char name1, char name2) {
    
}

Graph::~Graph() {
    // delete all the nodes
    std::map<char, Node *>::iterator it;
    for (it = name2node.begin(); it != name2node.end(); it++) {
        // get the information for the current entry in the map
        char name = it->first;
        Node *node = it->second;

        // free the memory used for the node
        delete node;
    }
}
