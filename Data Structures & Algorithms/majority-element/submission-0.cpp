class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> u;
        for(int i : nums){
            u[i]++;
            if(u[i] > size(nums) / 2) return i;
        }
        return -1;
    }
};