class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> seen;
        int maxi=0;
        int n=s.size();
        int i=0;
        
        for(int j=0; j<n; j++){
            
                while(seen.find(s[j]) != seen.end()){
                    seen.erase(s[i]);
                    i++;
                }
            
            seen.insert(s[j]);
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};