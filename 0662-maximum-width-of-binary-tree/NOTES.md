Approach
To solve this problem, we can use breadth-first search (BFS) to traverse the tree level by level. At each level, we keep track of the indices of the leftmost and rightmost non-null nodes. The width of the level is the difference between these indices plus one.
​
We can maintain a queue of pairs, where each pair represents a node and its index. The index of the root is 0, and we can assign indices to the left and right child nodes as follows:
1. For a node with index i, its left child has index 2i+1.
2. For a node with index i, its right child has index 2i+2.
​
We can use a ans variable to store the maximum value of rightmost index - leftmost index + 1.
After we have traversed the entire tree, ans variable now holds the maximum value and we return it.
​
We are using 2LL to convert the value into long long data type, as the difference of end_index and start_index will be in integer limits but the individual values will exceed the integer limit and throws runtime error;