class Solution {
   public:
    vector<vector<int>> res;
    void b(vector<int>& current, vector<int>& nums, vector<bool>& used) {
        if (size(current) == size(nums)) {
            res.push_back(current);
            return;
        }
        for (int i = 0; i < size(nums); i++) {
            if (!used[i]) {
                ////////
                if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

                used[i] = true;
                current.push_back(nums[i]);

                b(current, nums, used);

                current.pop_back();
                used[i] = false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int> current;
        vector<bool> used(size(nums), false);
        b(current, nums, used);
        return res;
    }
};