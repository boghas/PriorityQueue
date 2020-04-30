#include <iostream>

/*
 * This is the node structure
 * It acts as a container of values
 * Every node will the root of another node
 * The right node will hold the next ascending value
 * The left node is just the root of the next node
 * Key is the value that will set the Node higher or lower the heap
 */
struct Node {
    Node *left;
    Node *right;
    int key;
};