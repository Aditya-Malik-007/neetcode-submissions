class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int , int> mpp;
        for(int i = 0; i < n; i++){
            if(mpp.find(nums[i]) == mpp.end()){
                mpp[nums[i]] = i;
            }
        }
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int num = target - nums[i];
            if(mpp.find(num) != mpp.end() && i != mpp[num]){
                ans.push_back(i);
                ans.push_back(mpp[num]);
                break;
            }
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};
