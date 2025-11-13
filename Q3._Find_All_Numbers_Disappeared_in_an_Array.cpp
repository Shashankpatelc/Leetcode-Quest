#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> map;
        
        for(auto &a : nums){
            map[a] = 1;
        }

        for(int i = 1; i <= nums.size(); i++){
            if( map[i] != 1){
                res.push_back(i);
            }
        }

        return res;
    }
};