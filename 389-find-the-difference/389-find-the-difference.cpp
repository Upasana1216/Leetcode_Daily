class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char ans = 0;
        int i = 0;
        for(i=0;i<s.size();i++){
            
            ans ^= s[i] ^ t[i];
            
        }
        
        return ans ^ t[i];
    }
};