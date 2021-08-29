class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int length = s.length();
    
        
        int i = length - 1;
        while(s[i] == ' ' && i <= length){
            i--;
        }
        
        while(i >= 0 && s[i] != ' ' && i <= length){
            i--;
            count++;
        }
        
        return count;
    }
};