class Solution {
public:
    long long int reverse(int x) {
        long int fact = 1, ans = 0, temp = 0;
        
        while(x){
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        
        if(ans > INT_MAX){
            return 0;
        } else if (ans < INT_MIN){
            return 0;
        }
        
        return ans;
    }
};