class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int c=0,mx=0;
        for(int n:nums){
            if(n==1)
                c++;
            else
                c=0;
            mx=max(c,mx);
        }
        
        return mx;
    }
};