class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int area = 0,n = heights.size();
        stack<int> st;

        for( int i = 0; i < n; i++){
            while( !st.empty() && heights[i] < heights[st.top()] ){
                int height = heights[st.top()];
                st.pop();
                int left = st.empty() ? -1 : st.top();
                int width = i - left - 1;
                area = max(area,width*height);
            }
            st.push(i);
        }

        while(!st.empty()){
            int h = heights[st.top()];
            st.pop();
            int left = st.empty() ? -1 : st.top();
            int width = n - left - 1;
            area = max(area, h * width);
        }

        return area;
    }
};