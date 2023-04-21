We'll make a queue, which sotres pairs of TreeNode* and int, i.e. the level of that node
First we set level as 0 for the root.
Now, each time we move to a child node, we'll increment the level.
As we need to return a vector<vector<int>>, we can't directly push elements in a 2D vector, because it will throw runtime error, because we can't initialise the res vector, because we dont know how many level are there in the tree. And puhsing elements in a vector, which is not present will throw error.
So each time we push an element in the res 2D vector, we'll resize it with the temp_level+1, which is the level of the current node.