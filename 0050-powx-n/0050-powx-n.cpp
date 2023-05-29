class Solution {
public:
    double myPow(double x, int n) {
        //base condition
        if(n==0) return 1;
        
        //if n is negative, turn n into positive, and x to 1/x
        if(n<0) {
            n = abs(n);
            x = 1/x;
        }
        
        //if n is even, x=x*x and n=n/2 for example x=2, n=6 becomes, x=4, n=3
        //2^6 = 4^3
        if(n%2==0){
            return myPow(x*x, n/2);
        }
        else{
            return x*myPow(x, n-1);
        }
    }
};