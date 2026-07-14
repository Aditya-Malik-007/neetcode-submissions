class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        st.push(0);
        int ans = INT_MIN;
        for(int i = 0; i <= n ; i++){
            while(!st.empty() && (i == n || heights[st.top()] >= heights[i])){
               int h = heights[st.top()];
               st.pop();
               int left = (st.empty()) ? -1 : st.top();
               ans = max(ans , h*(i - left - 1)); 
            }
            st.push(i);
        }
        return ans;
    }
};
