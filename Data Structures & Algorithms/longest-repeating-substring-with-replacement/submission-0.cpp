class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int maxlen = 0;
        int maxf = 0;
        vector<int> freq(26 , 0);
        char c = s[0];
        while(r < s.size()){
            int len = 0;
            freq[s[r] - 'A']++;
            maxf = max(maxf , freq[s[r] - 'A']);
            if(r - l + 1 - maxf > k){
                freq[s[l] - 'A']--;
                l++;
            }else{
                len = r - l + 1;
                maxlen = max(maxlen , len);
            }
            r++;
        }
        return maxlen;
    }
};
