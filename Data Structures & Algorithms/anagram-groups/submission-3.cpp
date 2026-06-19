class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        unordered_map<string , vector<string>> mpp;
        for(int i = 0; i < n ; i++){
            vector<int> freq(26 , 0);
            string str = strs[i];
            for(int s : str){
                freq[s - 'a']++;
            }
            string key ="";
            for(int x : freq){
                key += "#" + to_string(x);
            }
            mpp[key].push_back(str);
        }
        for(auto&[key , vec] : mpp){
            ans.push_back(vec);
        }
        return ans;
    }
};
