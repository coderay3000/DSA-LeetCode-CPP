class Solution {
public:
    int strStr(string s1, string s2) {
        int n=s1.size();
        int i=0;
        int l=s2.size();
        if(l>n) return -1;
        if(n==1 && l==1 && s1[0]==s2[0]) return 0;
        while(i<n){
            string s=s1.substr(i,l);
            if(s==s2){
                return i;
                break;
            }
            i++;
        }
        return -1;
    }
};