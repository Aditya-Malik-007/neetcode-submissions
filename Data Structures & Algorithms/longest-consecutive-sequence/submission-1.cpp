class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> st;
        int n = nums.size();
        for(int x : nums){
            st.insert(x);
        }
        int ans = INT_MIN;
        for(auto it : st){
            int start  = it;
            int cnt = 1;
            if(st.find(start-1) == st.end()){
                while(st.find(start+1) != st.end()){
                    cnt++;
                    start++;
                }
                ans = max(ans , cnt);
            }
        }
        return ans;
    }
};
