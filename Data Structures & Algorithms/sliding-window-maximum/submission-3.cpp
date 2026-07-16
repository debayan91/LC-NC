class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = size(nums);
        vector<int> res;
        deque<int> dq;
        for(int i = 0; i < n; i++){
            // delete all those at the back that are <= current
            // so we have current -> greater -> greatest
            // in the window with current we cannot have anything worse being chosen
            while(!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back(); // <-- delete
            // put current in
            dq.push_back(i); // --> insert
            // if the best element is the one getting left behind -> out of window
            if(dq.front() <= i - k) dq.pop_front(); // --> delete
            // 
            if(i + 1 >= k) res.push_back(nums[dq.front()]);
        }
        return res;
    }
};
