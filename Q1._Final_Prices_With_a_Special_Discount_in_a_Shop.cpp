class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> res = prices;
        stack<int> st;
        for( int i = 0; i < n; i++){
            while( !st.empty() && prices[i] <= prices[st.top()] ){
                int j = st.top();
                st.pop();
                res[j] = prices[j] - prices[i];
            }
            st.push(i);
        }
        return res;
    }
};