class Solution {
public:
    bool isPalindrome(int x) {
        int temp,original;
        long long sum=0;
        original=x;
        while(x!=0)
        {
            temp=x%10;
            sum=sum*10+temp;
            x=x/10;
        }
        if(sum==original&&original>=0)
        return true;
        else
        return false;
       
        
    }
};