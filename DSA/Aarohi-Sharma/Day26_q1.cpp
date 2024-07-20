class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long pall=x;
        long long rev=0, rem=0;
        while(x!=0){
            rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if(rev==pall){
            return true;
        }
        else{
            return false;
        }
    }
};
