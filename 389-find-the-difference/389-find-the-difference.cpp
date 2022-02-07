class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26]={0};
        
        for(int i=0;i<t.size();i++){
            
            if(i<s.size())
                arr[s[i]-'a']++;
            
            arr[t[i]-'a']--;
        }
        
        for(int i=0;i<26;i++)
        {
            if(arr[i]==-1)
                return char(i+'a');
        }
        
        return -1;
    }
};