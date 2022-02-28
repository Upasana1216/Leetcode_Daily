// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    void solve(int i,vector<int> arr,int N, vector<int> &ans,int s){
        
        if(i==N){
            ans.push_back(s);
            return;
        }
        
        
        s+=arr[i];
        solve(i+1,arr,N,ans,s);
        s-=arr[i]; 
        solve(i+1,arr,N,ans,s);
       
        
        

    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int i=0,s=0;
        vector<int> ans;
        solve(i,arr,N,ans,s);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends