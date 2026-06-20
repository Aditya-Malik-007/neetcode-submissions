class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string& s : strs){
            int len = s.length();
            string to_add = to_string(len) + "#";
            encoded_string += to_add + s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_str;
        int i = 0;
        char p = '#';
        while(i < s.size()){
            string l = "";
            while(i < s.size() && s[i] != p) {
                l += s[i];
                i++;
            }
            int len = stoi(l);
            i++;
            string temp = "";
            temp += s.substr(i, len);
            i = i + len;
            decoded_str.push_back(temp);
        }
        return decoded_str;
    }
};