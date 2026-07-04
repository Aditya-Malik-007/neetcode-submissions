class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size() - 1;
        while(low <= high){
           int mid = low + (high  - low)/2;
           if(target == nums[mid]) return mid;
           if(nums[mid] > nums[high]){
            if(target > nums[mid] || target <= nums[high]){
                low = mid + 1;
            }else{
                high = mid;
            }
           }else{
            if(target <= nums[high] && target > nums[mid]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
           }
        }
        
        return -1;
    }
};
