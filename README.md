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

How main Runs:

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
