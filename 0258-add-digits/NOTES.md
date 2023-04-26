Solution 1: Iterative Approach
We'll solve this problem with two while loops. First while loop controls the return, which is set to while number is greater than 9 or greater than equal to 10.
Then in this while loop we'll take a temp variable total, now in the inner while loop, while num>0, add the digits of num to total and divide num by 10. At last set num = total.
If num is still greater than 9, again repeat the process. otherwise return num.
​
Solution 2: Maths Approach
The digital root (also repeated digital sum) of a natural number is a single digit value obtained by an iterative process of summing digits. In base 10, this is equivalent to taking the remainder upon division by 9 (except when the digital root is 9, where the remainder upon division by 9 will be 0).
​
Solution 3: Recursive approach
Take a variable sum=0.
while num is greater than 0, add the digits of num to sum and divide num by 10.
now check if sum<10, return the value, else again call addDigits function for the new value, i.e. sum.
​