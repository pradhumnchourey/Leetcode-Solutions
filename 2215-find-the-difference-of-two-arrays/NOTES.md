Solving using Hash-Table:
Create a 2d vector of size 2.
Then we'll create two sets and populate them using the vectors nums1 and nums2.
Now iterate on the elements of s1 and check if it present in s2. If it is not present, insert it in the ans[0] vector.
Repeat the step for s2 set and check it is present in s1. If it is not present, insert it in the ans[1] vector.
Return ans.