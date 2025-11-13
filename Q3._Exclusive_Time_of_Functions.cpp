#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n,0);
        stack<size_t> st;
        size_t prev = 0;

        for (auto &a : logs){

            size_t p1 = a.find(":");
            size_t p2 = a.find(":",p1 + 1);

            size_t id = stoi(a.substr(0, p1));
            string status = a.substr(p1+1, p2 - p1 - 1);
            size_t time = stoi(a.substr(p2 + 1));

            if( status == "start" ){
                if( !st.empty() ){
                    res[st.top()] += time - prev;
                }
                st.push(id);
                prev = time;
            } else if(status == "end") {
                res[st.top()] += time - prev + 1;
                st.pop();
                prev = time + 1;
            }
        }
        return res;
    }
};