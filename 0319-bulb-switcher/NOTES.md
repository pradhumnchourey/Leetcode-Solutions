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