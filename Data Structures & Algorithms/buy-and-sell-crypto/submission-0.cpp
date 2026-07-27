class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices.size();
        int maxprofit=0,profit;
        for(int i=0;i<s-1;i++){
            for(int j=i+1;j<s;j++){
                profit=prices[j]-prices[i];
                maxprofit=max(profit,maxprofit);
            }
        }
        return maxprofit;
    }
};
