
#include<algorithm>
class Solution {
public:
    int rob(vector<int>& nums) {
        int r1=0;
        int r2=0;
        for(int i:nums){
            int n=max(i+r1,r2);
            r1=r2;
            r2=n;
        }
        return max(r1,r2);
        }
    };
