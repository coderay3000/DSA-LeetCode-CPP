class Solution {
public: 
bool possible(vector<int>& piles,long long mid,int h){
        long long ans=0;
        for(auto &t:piles){
           ans+=(t+(mid-1))/mid;
        }
        return ans<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
         long long l=1;
         long long r=(long long)*max_element(begin(piles),end(piles));
         while(l<=r){
            long long mid=l+(r-l)/2;
            if(possible(piles,mid,h)){
                r=mid-1;
            }else{
                l=mid+1;
            }
         }
         return l;
    }
};