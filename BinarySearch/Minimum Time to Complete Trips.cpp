class Solution {
public:
bool possible(vector<int>& time,long long givenTime,int totalTrips){
    long long actualTrip=0;
   
    for(auto &t :time){
        actualTrip+=givenTime/t;
    }
    return actualTrip >= totalTrips;
}
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        long long l=1,r=(long long)*min_element(begin(time),end(time))*totalTrips;
   while(l<r){
    long long mid=l+(r-l)/2;
    if(possible(time,mid,totalTrips)){
        r=mid;
    }else{
        l=mid+1;
    }
   }
   return l;
    }
};