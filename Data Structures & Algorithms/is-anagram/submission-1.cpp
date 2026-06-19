class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s1(26 , 0) , t1(26 , 0);
        int n = s.size();
        int n1 = t.size();
        if(n != n1) return false;
        for(int i = 0; i < n; i++){
            s1[s[i] - 'a']++;
            t1[t[i] - 'a']++;
        }
        for(int i = 0; i < 26 ;i++){
            if(s1[i] != t1[i]) return false;
        }
        return true;
    }
};
