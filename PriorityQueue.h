#pragma once
#include <cstdint>
#include <climits>
#include <vector>
#define MAX_SIZE  100

template <class T>
class PriorityQueue {
private:
    T arr[MAX_SIZE];
    uint32_t max_priority;
    int front, rear;
public:
    PriorityQueue(uint32_t maxPriorityValue) {
        front = -1;
        rear = -1;
        max_priority = maxPriorityValue;
    }
    int size() {
        if(front == -1) {
            return 0;
        }
        else {
            return rear;
        }
    }
    
    bool empty() {
        return rear == front;
    }
    
    bool isFull() {
        return rear == MAX_SIZE-1;
    }
    
    void push(T value, uint32_t priority) {
        int i;
        if(!isFull()) {
            value.priority = priority;
            if(rear == -1) {
                rear++;
                arr[rear] = value;
            }
            else {
                for(i = rear; i > front; i--) {
                    if(priority < arr[i].priority) {
                        arr[i+1] = arr[i];
                    }
                    else {
                        break;
                    }
                }
                arr[i+1] = value;
                rear++;
            }
        }
        else {
            throw "is Full";
        }
    }
     
    T pop() {
        front++;
        return arr[front];
    }
    
    ~PriorityQueue() {
        
    }
};