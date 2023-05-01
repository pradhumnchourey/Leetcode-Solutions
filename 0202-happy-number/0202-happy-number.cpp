class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        int temp = 0;
        while(s.count(n)==0){       //if n does not exist in the set, i.e. count of n==0, if count!=0, it means that element already exist in the set, so dont go in the loop
            s.insert(n);            //insert n in the set
            temp = 0;
            while(n){                       //while n, has digits
                temp += (n%10)*(n%10);      //for each digit, temp+=digit*digit
                n/=10;                      //n = n/10
            }
            n = temp;                       //put n = temp
        }
        return (n==1);                      //if n==1 return true else false
    }
}; 