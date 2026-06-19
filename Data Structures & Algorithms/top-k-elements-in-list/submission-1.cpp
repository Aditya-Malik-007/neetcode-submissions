class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mpp;
        priority_queue<pair<int  , int>, vector<pair<int , int>>> pq;
        for(int i = 0; i < nums.size() ;i++){
            mpp[nums[i]]++;
        }
        for(auto&[num , freq] : mpp){
            pq.push({freq , num});
        }
        vector<int> ans;
        while(!pq.empty() && k > 0){
            int num = pq.top().second;
            pq.pop();
            ans.push_back(num);
            k--;
        }
        return ans;
    }
};
