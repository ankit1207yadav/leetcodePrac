class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        long long maxi=INT_MIN;
        long long ksum=0;

        for(int i=0; i<k; i++){
            ksum+=nums[i];
        }
       maxi=ksum;

        for (int i=k; i<n; i++){
            ksum=ksum-nums[i-k]+nums[i];
            
            maxi=max(maxi,ksum);
        }
        return (double)maxi/k;
    }
};