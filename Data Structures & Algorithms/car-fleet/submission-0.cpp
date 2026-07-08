class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        stack<double> st;
        vector<pair<int , int>> v(n);
        for(int i = 0; i < n ; i++){
            v[i] = {position[i] , speed[i]};
        }
        sort(v.rbegin() , v.rend());

        for(int i = 0; i < n ; i++){
            double time = (double)(target - v[i].first)/v[i].second;
            if(st.empty()){
                st.push(time);
            }else{
                if(st.top() < time){
                    st.push(time);
                }
            }
        }
        return st.size();
    }
};
