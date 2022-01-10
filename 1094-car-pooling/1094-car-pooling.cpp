class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        vector<int> track(1001);
        int sum = 0;
        for(auto a : trips){
            track[a[1]] += a[0]; //when trip starts add the passengers
            track[a[2]] += -a[0];//when trip ends remove the passengers
        }
        
        for(int i = 0; i <= 1000; i++){
            sum += track[i]; //now take the cumulative sum
            if(sum > capacity) //if at any point it greater than capcity 
                return false;  //return false
        }
        return true; //if you reach to end return true
    }
};