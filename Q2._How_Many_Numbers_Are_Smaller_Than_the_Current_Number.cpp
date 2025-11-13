#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        for( int i = 0; i < nums.size(); i++){
            for( auto &ele : nums){
                if(ele < nums[i]){
                    res[i]+=1;
                }
            }
        }
        return res;
    }
};