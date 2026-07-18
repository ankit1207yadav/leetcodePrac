class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        int mini=nums[0];
        int n = nums.size()-1;
        int maxi=nums[n];
        return gcd(mini,maxi);
    }
};