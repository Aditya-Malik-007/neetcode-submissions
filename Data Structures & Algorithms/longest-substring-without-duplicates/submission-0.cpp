class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char , int> freq;
       int l = 0; 
       int r = 0;
       int maxLen = 0;
       while(r < s.size()){
        if(freq.find(s[r]) == freq.end() ){
            freq[s[r]]++;
            maxLen = max(maxLen , r - l+1);
            r++;
        }else{
            freq[s[l]]--;
            if (freq[s[l]] == 0) {
                freq.erase(s[l]);
            }
            l++;
        }
       }
       return maxLen;
    }
};
