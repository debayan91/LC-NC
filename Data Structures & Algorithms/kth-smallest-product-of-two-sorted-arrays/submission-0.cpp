class Solution {
public:
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        priority_queue<long long> pq; //, vector<long long>, greater<long long>> pq;
        for(int i = 0; i < size(nums1); i++){
            for(int j = 0; j < size(nums2); j++){
                long long p = nums1[i] * nums2[j];
                pq.push(p);
                if(pq.size() > k) pq.pop();
            }
        }
        return pq.top();
    }
};