#include "Node.h"

Node::Node(char name) : name(name) {}

char Node::getName() {
    return name;
}

bool Node::isNeighbor(char name) {
    return name2Neighbor.find(name) != name2Neighbor.end();
}

bool Node::isNeighbor(Node *node) {
    return neighbor2cost.find(node) != neighbor2cost.end();
}

int Node::getNeighborCost(char name) {
    // make sure we know this neighbor
    if (!isNeighbor(name)) {
        return -1;
    }

    // return the cost of the neighbor
    return neighbor2cost.at(name2Neighbor.at(name));
}

int Node::getNeighborCost(Node *node) {
    // make sure we know this neighbor
    if (!isNeighbor(node)) {
        return -1;
    }

    // return the cost of the neighbor
    return neighbor2cost.at(node);
}

bool Node::addNeighbor(Node *node, int cost) {
    // make sure that we do not already know this neighbor
    if (isNeighbor(node)) {
        return false;
    }

    // insert the new neighbor into the mappings from name to neighbor and
    // neighbor to cost
    name2Neighbor.at(node->getName()) = node;
    neighbor2cost.at(node) = cost;
}

Node::~Node() {
    // nothing
}
