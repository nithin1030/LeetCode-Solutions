class Solution {
public:
    bool isPalindrome(int x) {
        int i, j;
        vector<int> array(0);
        
        if(x < 0)
            return false;
        
        while(x){
            array.push_back(x % 10);
            x /= 10;
        }
        
        i = 0, j = array.size() - 1;
        while(i < j){
            if(array[i] != array[j]){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
};