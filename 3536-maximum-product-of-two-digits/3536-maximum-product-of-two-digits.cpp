class Solution {
public:
    int maxProduct(int n) {
        vector <int> dig;
        while (n>0){
           int digit=n%10;
            n=n/10;
            dig.push_back(digit);
        }
        int maxi=0;
        for (int i=0; i<dig.size(); i++){
            for (int j=i+1; j<dig.size(); j++){
                int pro=dig[i]*dig[j];
                maxi=max(pro,maxi);
            }
        }
        return maxi;
        
    }
};