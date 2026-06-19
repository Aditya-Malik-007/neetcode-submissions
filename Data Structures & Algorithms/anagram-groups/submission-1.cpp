class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        map<vector<int> , vector<string>> mpp;
        for(int i = 0; i < n ; i++){
            vector<int> freq(26 , 0);
            string str = strs[i];
            for(int s : str){
                freq[s - 'a']++;
            }
            mpp[freq].push_back(str);
        }
        for(auto&[key , vec] : mpp){
            ans.push_back(vec);
        }
        return ans;
    }
};
