#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int res = 0;
        stack<int> st;
        for( auto &a : tokens){
            if( a != "+" && a != "-" && a != "*" && a != "/"){
                st.push(stoi(a));
            } else {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                switch(a[0]){
                    case '+' : res = n2 + n1;
                    break;
                    case '-' : res = n2 - n1;
                    break;
                    case '*' : res = n2 * n1;
                    break;
                    case '/' : res = n2 / n1;
                }
                st.push(res);
            }
        }
        return st.top();
    }
};