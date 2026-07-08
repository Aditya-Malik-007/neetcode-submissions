class TimeMap {
private:
    unordered_map<string , vector<pair<int , string>>> mpp;
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mpp[key].push_back({timestamp , value});
    }
    
    string get(string key, int timestamp) {
        auto& v = mpp[key];
        int low = 0;
        int high = v.size() - 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(v[mid].first > timestamp){
                high = mid - 1;
            }else{
                ans = mid;
                low = mid + 1;
            }
        }
        if(ans == -1) return "";
        return v[ans].second;
    }
};
