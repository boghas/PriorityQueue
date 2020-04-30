#include <iostream>

/*
 * This is the Fibonacci Heap
 * Elements: the highest node in the tree
 *           a counter representing size of the Heap
 * Constructor: Initializes the the root of the tree with NULL
 *              Sets the size of the heap with 0
 * Push: If the Heap is empty (highest root == NULL) then
 *       the inserted value becomes the root of the tree
 *       Else the left elements are always gonna pe pointers
 *       to the next elements of the root
 *       The right elements are always going to be the ordered values
 * Pop: First element is the root of the tree then move to the right
 *      until you reach the pointer to the minimum value;
 */
template <class T>
struct Heap {
    Node *min;
    int cnt;
    Heap() {
        min = NULL;
        cnt = 0;
    }
    void push(T value) {
        cnt++;
        Node *new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->key = value;
        new_node->left = new_node;
        new_node->right = new_node;
        if(min == NULL) {
            min = new_node;
        }
        else {
            min->left->right = new_node;
            new_node->right = min;
            new_node->left = min->left;
            min->left = new_node;
            if(new_node->key < min->key) {
                min = new_node;
            }
        }
    }
    T pop() {
        if(size() != 0) {
            Node * ptr = min;
            min = min->right;
            cnt--;
            return ptr->key;
        }
    }
    int size() {
        return cnt;
    }
};