class Solution {
public:
    void solve(int i,vector<int> arr,int N, set<vector<int> >  &ans,vector<int> v){
        if(i==N){
            sort(v.begin(),v.end());
            ans.insert(v);
            return;
        }
        v.push_back(arr[i]);
        solve(i+1,arr,N,ans,v);
        v.pop_back();
        solve(i+1,arr,N,ans,v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        int N=arr.size();
        int i=0,s=0;
        vector<int> v;
        set<vector<int> > ans;
        solve(i,arr,N,ans,v);
        
        vector<vector<int> > fin;
        for(auto s:ans){
            fin.push_back(s);
        }
        
        return fin;
    }
};