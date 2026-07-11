class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if (n>m){
            return false;
        }
        sort(s1.begin(),s1.end());

        for(int i=0; i<=m-n; i++){
            string temp="";
            for (int j=i; j<i+n; j++){
                temp+=s2[j];
            }
            sort(temp.begin(),temp.end());
            if (temp==s1){
                return true;
            }
        }
        return false;
    }
};