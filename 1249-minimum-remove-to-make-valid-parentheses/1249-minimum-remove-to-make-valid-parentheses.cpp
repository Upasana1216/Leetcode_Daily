class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int c1=0,c2=0;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='(')
                c1++;
            else if(s[i]==')'){
                
                if(c1==0)
                    s[i]='#';
                else
                    c1--;
        
            }
        }
        c1=0;
        for(int i=s.size()-1;i>=0;i--){
            
            if(s[i]==')')
                c1++;
            else if(s[i]=='('){
                if(c1==0)
                    s[i]='#';
                else
                    c1--;
        
            }
        }
        
        string temp="";
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='#')
                continue;
            
            temp+=s[i];
        }
        
        return temp;
    }
};