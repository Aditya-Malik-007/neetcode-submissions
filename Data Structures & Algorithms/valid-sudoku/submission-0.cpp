class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> mpp;
        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                string r = "r" + to_string(i) + board[i][j];
                string c = "c" + to_string(j) + board[i][j];
                string b = "b" + to_string(i/3) + to_string(j/3) + board[i][j];
                if(mpp.count(r) || mpp.count(c) || mpp.count(b)){
                    return false;
                }
                mpp.insert(r);
                mpp.insert(c);
                mpp.insert(b);
            }
        }
        return true;
    }
};
