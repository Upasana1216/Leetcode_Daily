class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool in=false;
        bool de=false;
        
        int i=1;
        while(i<arr.size()){
            if(arr[i]>arr[i-1])
                i++;
            else
                break;
              
            in=true;
        }
        
        if(i==arr.size())
            return false;
        while(i<arr.size())
        {
            if(arr[i]<arr[i-1])
                i++;
            else
                break;
            de=true;
        }
        
        if(i==arr.size() && in==true && de==true)
            return true;
        
        return false;
    }
};