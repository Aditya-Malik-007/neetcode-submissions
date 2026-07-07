class MinStack {
private:
    stack<long long> st;
    long long minelement; 
public:
    MinStack() {
        minelement = INT_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
            minelement = val;
            st.push(val);
        }else{
            if(minelement <= val){
                st.push(val);
            }else{
                st.push(2LL*val - minelement);
                minelement = val;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        if(st.top() >= minelement){
            st.pop();
        }else{
            minelement = 2LL*minelement - st.top();
            st.pop();
        }
    }
    
    int top() {
        if(st.top() >= minelement){
            return st.top();
        }else{
            return minelement;
        }
    }
    
    int getMin() {
        return minelement;
    }
};
