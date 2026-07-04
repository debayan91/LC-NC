class Solution {
public:
    bool check(vector<int>& nums) {
        int n = size(nums);
        int i;
        for(i = 0; i < n - 1; i++){
            if(nums[i] > nums[i + 1]) break;
        }
        i = (i + 1) % n;
        cout << nums[i];
        for(int j = 0; j < n - 1; j++){
            if(nums[i] > nums[(i + 1) % n]) return false;
            i = (i + 1) % n;
        }
        return true;
    }
};