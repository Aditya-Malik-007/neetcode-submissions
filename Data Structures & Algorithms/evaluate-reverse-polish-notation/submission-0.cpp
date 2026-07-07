class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto& c : tokens){
            if(c != "+" && c != "-" && c != "*" && c != "/"){
                int n = stoi(c);
                st.push(n);
            }else{
                int num = 0;
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if(c == "+") num = y + x;
                else if(c == "*") num = y*x;
                else if(c == "-") num = y - x;
                else num = y/x;
                st.push(num);
            }
        }
        return st.top();
    }
};
