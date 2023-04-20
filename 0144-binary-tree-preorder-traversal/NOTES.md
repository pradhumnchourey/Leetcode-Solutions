PreOrder Traveresal of a binary tree is Root, left, right and so on
so lets consider a tree;
1
2        3
4    5    6    7
To solve this we are using a stack, first push the root in the stack, then iterate while the stack is not empty. Take the top element and push its value in ans vector.
After that since this is a stack, we'll first push the right element and then the left element as in the next iteration, top i.e., will we fetched first, and then its child node will be processed in the same fashion and so on.
stack:
​
​
4
2   5   5        6
1    3   3   3   3   7   7  null