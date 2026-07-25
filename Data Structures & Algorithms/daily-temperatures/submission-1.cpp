class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = size(t);
        vector<int> res(n, 0);
        stack<int> st;
        for(int i = 0; i < n; i++){
            if(st.empty()) st.push(i);
            else{
                while(!st.empty() && t[st.top()] < t[i]){
                    res[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i);
            }
        }
        return res;
    }
};
