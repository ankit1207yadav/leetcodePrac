class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        int i = 0;
        int ans = 0;

        for (int j = 0; j < nums.size(); j++) {

            // Add current element
            freq[nums[j]]++;

            // If frequency becomes greater than k
            while (freq[nums[j]] > k) {
                freq[nums[i]]--;
                i++;
            }

            // Current window [i ... j] is good
            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};