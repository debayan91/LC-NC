class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int mx = 0;
        unordered_map<char, int> st;
        for(int i = 0; i < size(s); i++){
            if(st.count(s[i]) && st[s[i]] >= start){
                start = st[s[i]] + 1;
                st[s[i]] = i;
            } else {
                st[s[i]] = i;
                mx = max(i - start + 1, mx);
            }
        }
        return mx;
    }
};
