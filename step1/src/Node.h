#ifndef NODE_H
#define NODE_H

#include <map>

class Node {
    private:
        // the name of this node
        char name;

        // a mapping from neighbors names to pointers that represent the nodes
        std::map<char, Node *> name2Neighbor;

        // a mapping from neighbor pointers to the cost it takes to get
        // directly from this node to that neighbor
        std::map<Node *, int> neighbor2cost;

    public:
        /**
         * initialize node
         * 
         * @param name the name of this node
         */
        Node(char name);

        /**
         * get the name of this node
         * 
         * @return the name of this node
         */
        char getName();

        /**
         * check whether this node knows a neighbor with a specific name
         * 
         * @param name the name of the neighbor to check for
         * 
         * @return true if this node knows the neighbor, false otherwise
         */
        bool isNeighbor(char name);

        /**
         * check whether this node knows a neighbor, by pointer
         * 
         * @param node a pointer to the neighbor to check for
         * 
         * @return true if this node knows the neighbor, false otherwise; note
         * that the pointers must match for this node to know the neighbor
         */
        bool isNeighbor(Node *node);

        /**
         * get the cost of traveling from this node to the neighbor with a
         * specific name
         * 
         * @param name the name of the neighbor to get the cost of
         * 
         * @return the cost of traveling from this node to the specified
         * neighbor, or -1 if this node does not know a neighbor with that name
         */
        int getNeighborCost(char name);

        /**
         * get the cost of traveling from this node to the neighbor with a
         * specific pointer
         * 
         * @param node a pointer to the neighbor to get the cost of
         * 
         * @return the cost of traveling from this node to the specified
         * neighbor, or -1 if this node does not know a neighbor with that
         * pointer
         */
        int getNeighborCost(Node *node);

        /**
         * add a neighbor to this node
         * 
         * @param node the neighbor to add
         * @param cost the cost to get directly from this node to the new
         * neighbor
         * 
         * @return true if the add was successful, or false if the neighbor was
         * already known to this node (and thus not added or updated)
         */
        bool addNeighbor(Node *node, int cost);

        ~Node();
};

#endif
