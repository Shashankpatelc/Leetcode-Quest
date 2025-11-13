#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> st;
        vector<string> res;
        int i = 0, stream = 1;
        while(st.size() < target.size() && stream <= n){

            st.push(stream);
            res.push_back("Push");
            
            if(st.top() != target[i]){
                st.pop();
                res.push_back("Pop");
                stream++;
            } else {
                i++;
                stream++;
            }
        }
        return res;
    }
};