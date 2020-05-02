NOTE: This Priority Queue has the performance O(n) for push and O(1) for pop. A better performance will be obtained by using HEAPS.
	  This will be a work on progress untill this Priority Queue reaches O(1) both for push and pop. To obtain this I will be using 
	  a Fibonacci Heap.


Priority Queue is an extension of queue with following properties.

	1. Every item has a priority associated with it.
	2. An element with high priority is dequeued before an element with low priority.
	3. If two elements have the same priority, they are served according to their order in the queue.

Applications of Priority Queue:

	1. CPU Scheduling
	2. Graph algorithms like Dijkstra’s shortest path algorithm, Prim’s Minimum Spanning Tree, etc
	3. All queue applications where priority is involved.
	
This PriorityQueue is meant to work with multiple data types, but I've only worked with a Patient struct
found in Patient.h with just a few basic elements.

How main function Runs:

First reads a char from command line that should be one of the following:

	1. '+' for a new entry
	2. '-' Pops an element from Queue
	3. '*' Terminates the program.
	
If a '+' char has been given then the next commands should be:

	1. FirstName
	2. LastName
	3. Age
	4. Gender
	5. Priority
	
Eg. of command entry:

+ firstName lastName 36 M 3

Fibonacci Heap:

Fibonacci heap is a data structure for priority queue operations, consisting of a collection of heap-ordered trees. It has a better amortized running time than many other priority queue data structures. A Fibonacci heap is a collection of trees satisfying the minimum-heap property, that is, the key of a child is always greater than or equal to the key of the parent. This implies that the minimum key is always at the root of one of the trees.

More information related on Fibonacci Heap: https://en.wikipedia.org/wiki/Fibonacci_heap
A representation of what I'm trying to do: https://www.tutorialspoint.com/cplusplus-program-to-implement-priority-queue


