class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int rmax = height[r];
        int lmax = height[l];
        int ans = 0;
        while(l < r){
            if(lmax > rmax){
                r--;
                if(height[r] < rmax){
                    ans += rmax - height[r];
                }else{
                    rmax = height[r];
                }
            }else{
                l++;
                if(height[l] < lmax){
                    ans += lmax - height[l];
                }else{
                    lmax = height[l];
                }
            }
        }
        return ans;
    }
};
