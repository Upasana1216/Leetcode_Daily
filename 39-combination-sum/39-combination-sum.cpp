class Solution {
public:
    void solve(int i,vector<int> arr,int N, vector<vector<int> >& ans,vector<int> v,int target){
        if(i==N){
            if(target==0){
            sort(v.begin(),v.end());
            
            ans.push_back(v);
            
            }
            return;
        }
        if(arr[i]<=target){
            v.push_back(arr[i]);
            solve(i,arr,N,ans,v,target-arr[i]);
            v.pop_back();
        }
        solve(i+1,arr,N,ans,v,target);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        int N=arr.size();
        int i=0,s=0;
        vector<int> v;
        vector<vector<int> > ans;
        solve(i,arr,N,ans,v,target);
        
        return ans;
        
    }
};