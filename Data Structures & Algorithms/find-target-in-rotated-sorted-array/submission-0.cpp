class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size() - 1;
        while(low < high){
            int mid = low +(high - low)/2;
            if(nums[mid]>nums[high]) low = mid + 1;
            else high = mid;
        }
        int low1 = low;
        int high1 = nums.size() - 1;
        int low2 = 0;
        int high2 = low-1;
        while(low1 <= high1){
            int mid = low1 +(high1 - low1)/2;
            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) low1 = mid + 1;
            else high1 = mid - 1;
        }
        while(low2 <= high2){
            int mid = low2 +(high2 - low2)/2;
            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) low2 = mid + 1;
            else high2 = mid - 1;
        }
        return -1;
    }
};
