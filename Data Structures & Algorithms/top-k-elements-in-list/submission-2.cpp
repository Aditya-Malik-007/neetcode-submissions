class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        unordered_map<int , int> freq;
        for(auto num : nums){
            freq[num]++;
        }
        for(auto&[num , f] : freq){
            bucket[f].push_back(num);
        }
        vector<int> ans;
        for(int i = n; i >= 0 ; i--){
            for(int it : bucket[i]){
                if(k > 0){
                    ans.push_back(it);
                    k--;
                }
            }
        }
        return ans;
    }
};
