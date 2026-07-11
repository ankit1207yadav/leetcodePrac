class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string temp = "";
        string ans = "";

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                temp.push_back(s[i]);
            } else {

                // FIX: Agar temp empty hai to matlab consecutive/leading/trailing
                // spaces hain. Unhe ignore karna hai.
                if (!temp.empty()) {

                    reverse(temp.begin(), temp.end());

                    if (!ans.empty()) {
                        ans.push_back(' ');
                    }

                    ans += temp;
                    temp.clear();
                }
            }
        }

        // Last word (leftmost word) ko add karne ke liye
        if (!temp.empty()) {
            reverse(temp.begin(), temp.end());

            if (!ans.empty()) {
                ans.push_back(' ');
            }

            ans += temp;
        }

        return ans;
    }
};