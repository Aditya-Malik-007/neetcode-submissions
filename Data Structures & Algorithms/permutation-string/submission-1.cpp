class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        int r = s1.size() - 1;
        int l = 0;
        vector<int> hash(26 , 0);
        for(int i = 0; i < s1.size(); i++){
            hash[s1[i] - 'a']++;
        }
        vector<int> hash1(26 , 0);
        for(int i = 0; i < s1.size(); i++){
            hash1[s2[i] - 'a']++;
        }
        while( r < s2.size()){
            bool flag = true;
            for(int i = 0 ;i < 26 ; i++){
                if(hash[i] != hash1[i]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return true;
            }
            hash1[s2[l] - 'a']--;
            l++;
            r++;
            if(r < s2.size())
            hash1[s2[r] - 'a']++;
        }
        return false;
    }
};
