class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[prices.size()-1];
        int ans=0;
        int res=0;
        for(int i=prices.size()-2;i>=0;i--){
            if(prices[i]<m)
                res=m-prices[i];
            else
                m=prices[i];
            ans=max(ans,res);
        }
        return ans;
    }
};