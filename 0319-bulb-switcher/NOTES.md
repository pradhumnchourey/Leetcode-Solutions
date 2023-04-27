```
vector<int> bulbs(n+1, 1);
bulbs[0]=0;
for(int i=2; i<=n; i++){
for(int j=i; j<=n; j+=i)
bulbs[j]*=-1;
}
sort(bulbs.begin(), bulbs.end(), greater<int>());
int ans =0;
for(int i=0; i<=n; i++){
if(bulbs[i]!=1)
return ans;
ans++;
}
return ans;
```
The above code throws TLE.
So if we run hit and trial method starting from 0, we find a pattern which comes out to be:
From n = 1-3 the ans is 1   (1* (1+2))
from n = 4-8 the ans is 2   (2* (2+2))
from n = 9-15 the ans is 3 (3* (3+2)) and so on..
So the ans will be the minimum number which satisfys the condition  i*(i+2)>=n.
Again interesting though is, that number will never be more than the perfect square root of that number,.
For example, for n=25-35, the ans will be 5, square root of 25.