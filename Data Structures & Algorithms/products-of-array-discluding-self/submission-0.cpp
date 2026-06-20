class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        long long product = 1;
        int zeroCnt = 0;
        for(int i = 0 ; i < nums.size(); i++){
            product *= nums[i];
            if(nums[i] == 0) zeroCnt++;
        }
        long long p2 = 1;
        vector<int> ans(n);
        if(zeroCnt == 1){
            for(int i = 0 ; i < nums.size(); i++){
                if(nums[i] != 0){
                    p2 *= nums[i];
                }
            }
            for(int i = 0 ; i < nums.size(); i++){
                if(nums[i] != 0){
                    ans[i] = 0;
                }else{
                    ans[i] = p2;
                }
            }
        }else if( zeroCnt > 1){
            for(int i = 0 ; i < nums.size(); i++){
                ans[i] = 0;
            }
        }else{
            for(int i = 0 ; i < nums.size(); i++){
                ans[i] = product/nums[i];
            }
        }
        return ans;
    }
};
