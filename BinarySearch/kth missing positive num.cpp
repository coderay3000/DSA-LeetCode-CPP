class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n=nums.size();
     int l=0,r=n-1;
     int mid=-1;
     while(l<=r){
        mid=l+(r-l)/2;
      int no_miss=nums[mid]-(mid+1);
      if(no_miss<k){
        l=mid+1;
      }else{
        r=mid-1;
      }
     }
     return l+k;
    }
};