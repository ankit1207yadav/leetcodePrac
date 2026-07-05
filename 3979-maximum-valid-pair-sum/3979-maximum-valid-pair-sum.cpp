class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        vector <int> copy = nums;
        int n= nums.size();
        long long ans=0;
        long long best = nums[0];
        for (int j=k; j<n; j++){
            best=max(best, 1LL* nums[j-k]);
            ans=max(ans,best + nums[j]);
        }
        return ans;
    }
};