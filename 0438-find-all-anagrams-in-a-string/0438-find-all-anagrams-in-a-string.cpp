class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector <int> ans;

       if (s.length()<p.length()){
         return ans;
       }
       vector<int> pcount(26,0);
       vector<int> window(26,0);

       for (int i=0; i<p.length(); i++){
        pcount[p[i]-'a']++;
        window[s[i]-'a']++;
       }

       if (pcount==window){
        ans.push_back(0);
       }

       for (int i=p.length(); i<s.length(); i++){
        window[s[i]-'a']++; //push new element in s 
        window[s[i-p.length()]-'a']--;//del old element no need 

        if (window==pcount){
            ans.push_back(i-p.length()+1);
        }
       }
       return ans;
    }
};