class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        sort(begin(s1),end(s1));
        int i=0,j=0;
        while(j<=n2){
            while(j-i+1 > n1){
                string s3=s2.substr(i,n1);
                sort(begin(s3),end(s3));
                if(s1==s3){
                    return true;
                }
                i++;
            }
            j++;
        }
        return false;
    }
};