class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int mx = 1;
        for(int i = 0; i < size(nums); i++){
            // current
            int current = nums[i];
            int c = k;
            int count = 0;
            for(int j = i - 1; j >= 0 && c - (current - nums[j]) >= 0; j--){
                c -= current - nums[j];
                count++;
            }
            while(i < size(nums) && nums[i] == current){
                count++;
                i++;
            }
            i--;
            mx = max(mx, count);
        }
        return mx;
    }
};