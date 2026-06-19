class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int , int>> freq;
        sort(nums.begin() , nums.end());
        int prev = nums[0];
        int cnt = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == prev){
                cnt++;
            }else{
                freq.push_back({cnt , prev});
                cnt = 1;
                prev = nums[i];
            }
        }
        freq.push_back({cnt , prev});
        sort(freq.rbegin() , freq.rend());
        vector<int> ans;
        for(auto& [f, key] : freq){
            if(k > 0){
                ans.push_back(key);
                k--;
            }
        }
        return ans;
    }
};
