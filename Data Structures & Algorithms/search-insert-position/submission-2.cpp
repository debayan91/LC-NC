class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < size(nums); i++){
            if(nums[i] >= target ) return i;
        }
        return size(nums);
    }
};