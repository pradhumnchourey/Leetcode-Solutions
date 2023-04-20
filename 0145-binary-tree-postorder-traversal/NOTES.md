PostOrder Traveresal of a binary tree is Left, Root, right and so on
so lets consider a tree;
1
2        3
4    5    6    7
So the postorder traversal would look like: [4,5,2,6,7,3,1]
To solve this we are using a stack, enter an endless while loop, which we are going to break later, first we check if the root does not points to nullptr, then push root in stack, and set root=root->left;
Now if the root points to nullptr, that means there are no left elements in the tree, go in to else and then push the value of top in the result vector, set root=root->right, such that there are any further right elements, if not, then again the root points to nullptr, in else again, push the top element in res and check its right and so on..
Until all the elements are traversed, finally in else we check if the stack is empty, break the loop
stack:
​
​
4
2   2   2        5             6        7
1    1   1   1   1   1   1   3   3   3   3    3   null