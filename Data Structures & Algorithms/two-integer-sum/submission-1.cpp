class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int , int> mpp;
        
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int num = target - nums[i];
            if(mpp.find(num) != mpp.end()){
                return {mpp[num], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};
