class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        //Since town judge will be the one who is having trust of all the person but not             trusting anyone in the town.
        
        //so we will decrease the count for the person who is trusting anyother person               because he can't be the judge wherease we will increse the count for the person             who is getting the trust as he can be the candidate for the judge.
        
        //If any person get count of N-1, that means everyone trust him so return that               index else return -1
        
        vector<int> count(n + 1, 0);
        
        for (auto& t : trust)
            count[t[0]]--, count[t[1]]++;
        
        
        for (int i = 1; i <= n; ++i) {
            if (count[i] == n - 1) 
                    return i;
        }
        return -1;
    }
};