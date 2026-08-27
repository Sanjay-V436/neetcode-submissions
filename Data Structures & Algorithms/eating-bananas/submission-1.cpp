class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx=*max_element(piles.begin(),piles.end());
        if(piles.size()==h){
            return mx;
        }
        int low=1;
        int high=mx;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours=0;
            for(int p:piles){
                hours+=(p+mid-1)/mid;
            }
            if(hours<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
