#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_len = 0, temp = 0;
        for(auto &a : nums){
            if(a==1){
                temp++;
            } else {
                max_len = max(max_len, temp);
                temp = 0;
            }
        }
        max_len = max(max_len, temp);
        return max_len;
    }
};