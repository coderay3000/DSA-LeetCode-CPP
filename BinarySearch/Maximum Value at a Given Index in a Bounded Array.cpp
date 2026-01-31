class Solution {
public:
typedef long long ll;
   ll getSumByFormulae(ll count,ll x){
    return count*x -(count*(count+1)/2);
   }
    int maxValue(int n, int index, int maxSum) {
       ll left=1;
       ll right=maxSum;
       ll mid_val;
       int res=0;
       while(left<=right){
        mid_val=left+(right-left)/2;


        ll left_cnt=min((ll)index,mid_val-1);

        ll left_sum=getSumByFormulae(left_cnt,mid_val);

        left_sum+=max((ll)0,index-(mid_val-1));


         ll right_cnt=min((ll)n-index-1,mid_val-1);

        ll right_sum=getSumByFormulae(right_cnt,mid_val);

        right_sum+=max((ll)0,n-index-1-(mid_val-1));

        ll total=left_sum+mid_val+right_sum;
        if(total<=maxSum){
            res=mid_val;
             left=mid_val+1;
        }else{
             right=mid_val-1;
        }
       }
       return res; 
    }
};