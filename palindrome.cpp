class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x;
        long sum=0;
        while(x!=0){
           int rem=x%10;
           sum=rem+sum*10;
           x=x/10;
        }
        if(sum==n){
            return true;}
            else{
                return false;
            }
        return {};
    }
};