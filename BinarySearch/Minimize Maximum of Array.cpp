class Solution {
public:
bool isValid(vector<int>& nums,long long mid_max,int n){
    vector<long long>arr(begin(nums),end(nums));
    for(int i=0;i<n-1;i++){
        if(arr[i]>mid_max){
            return false;
        }
        long long buffer=mid_max-arr[i];
        arr[i+1]=arr[i+1]-buffer;
    }
    return arr[n-1]<=mid_max;
}
    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();
        long long l=0;
        long long r=(long long)*max_element(begin(nums),end(nums));
        int res=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(isValid(nums,mid,n)){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};