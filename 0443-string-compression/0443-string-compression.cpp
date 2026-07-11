class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0; //read k liye
        int write=0;  // write k liye 

        while (i<n){
           char curr=chars[i];
           int count=0;
           while (i<n && chars[i]==curr){
            count++;
            i++;
           }

           chars[write]=curr;
           write++;
            if (count>1){
                string cnt = to_string(count);

                for (char c : cnt) {
                    chars[write] = c;
                    write++;
                }
            }
        }
        return write;
        
    }
};