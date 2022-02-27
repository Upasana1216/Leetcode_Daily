class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> n;
        for(int ele:nums){
            n.insert(ele);
        }
        int m=0;
        
        for(int ele:nums){
            
            if(!n.count(ele-1)){
                
                int curr=ele;
                int c=1;
                while(n.count(curr+1)){
                    curr+=1;
                    c+=1;
                }
                m=max(c,m);
            }
            
        }
        
        return m;
    }
};