class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int j=nums[0],c=0;
        for(int i=0;i<nums.size();i++){
            
            if(!c)
              j=nums[i];
            
            if(j==nums[i])
                c++;
            else c--;
            
            
        }
        
        return j;
        
    }
};