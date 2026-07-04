class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int mp = 0;
        for(int i = 1; i < size(prices); i++){
            mn = min(mn, prices[i]);
            mp = max(mp, prices[i] - mn);
        }
        return mp;
    }
};
