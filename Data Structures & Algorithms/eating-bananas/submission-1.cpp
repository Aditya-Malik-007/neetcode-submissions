class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        long long low = 1;
        long long high = *max_element(piles.begin() , piles.end());
        while(low < high){
            long long k = low + (high - low)/2;
            long long hrs = 0;
            for(int i = 0; i < n ; i++){
                hrs += (piles[i] + k-1)/k;
            }
            if(hrs > h){
                low = k + 1;
            }else{
                high = k;
            }
        }
        return low;
    }
};
