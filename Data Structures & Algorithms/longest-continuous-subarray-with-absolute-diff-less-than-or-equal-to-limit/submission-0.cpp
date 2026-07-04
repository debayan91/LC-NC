class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int start = 0;
        int mx = 0;
        vector<vector<int>> diff(size(nums), vector<int>(size(nums), 0));
        for(int i = 0; i < size(nums); i++){
            for(int j = 0; j < size(nums); j++){
                diff[i][j] = nums[i] - nums[j];
            }
        }
        for(int i = 0; i < size(nums); i++){
            int end = i;
            bool flag = true;
            for(int j = start; j <= end; j++){
                for(int k = start; k <= end; k++){
                    if(j == k){

                    }else{
                        if(diff[j][k] > limit || diff[k][j] > limit){
                            flag = false;
                            break;
                        }
                    }
                }
            }
            if(flag){
                mx = max(mx, end - start + 1);
            } else {
                start++;
            }
        }
        return mx;
    }
};