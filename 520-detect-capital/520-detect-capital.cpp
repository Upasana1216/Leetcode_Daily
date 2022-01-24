class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        
        for(int i=0;i<word.size();i++){
            if(isupper(word[i]))
                c++;
                
        }
        //cout<<c;
        
        if(c==1)
            if(isupper(word[0]))
                return true;
        if(c==0 || c==word.size())
            return true;
        
        return false;
    }
};