class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        h.push_back(0);
        int mx = 0;
        stack<int> st;
        for(int i = 0; i < size(h); i++){
            while(!st.empty() && h[st.top()] > h[i]){
                int ht = h[st.top()]; // we need the rect of this 
                st.pop();
                int left = st.empty() ? - 1 : st.top(); // left bound // if equal that is gonna compute the max // i assume that is the limit
                // so we start from left + 1 all the way till i - 1
                // so basically i - 1 - (left + 1) + 1 = i - left - 1
                int width = i - left - 1;
                int area = width * ht;
                mx = max(area, mx);
            }
            st.push(i);
        }
        return mx;
    }
};
