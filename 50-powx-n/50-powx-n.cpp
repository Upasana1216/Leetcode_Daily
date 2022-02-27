class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        int f=0;
        long nn=n;
        if(n<0){
            nn=-1*nn;
            f=1;
        }
        while(nn){
            if(nn%2==0)
            {
                nn=nn/2;
                x=x*x;
            }else
            {
                ans=ans*x;
                nn=nn-1;
            }
        }
        
        if(f==1)
            ans=(double)1.0/(double)ans;
        return ans;
    }
};