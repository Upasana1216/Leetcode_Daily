class Solution {
public:
    string addBinary(string a, string b) {
        
        //Basic Idea is we will start adding from last similar to normal addition
        
        int i=a.size()-1; 
        int j=b.size()-1;
        
        string ans=""; //To maintain the answer
        int c=0;       //To store the carry
        
        while(i>=0 || j>=0 || c>0){
            
            if (i >= 0) {
                c += a[i] - '0'; //calculating the carry at a[i]
                i -= 1;
            }
            if (j >= 0) {
                c += b[j] - '0';  //calculating the carry at a[i]
                j -= 1;
            }
            ans += (c % 2) + '0'; //c values can be 0,1,2 so we will get the value to be appended by c%2 as 
            c /= 2; // carry will be only there if c=2, so calculating carry
        }
        
        reverse(ans.begin(),ans.end()); //since started from last now rreversig
        
        return ans; 
    }
};