class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int prof=0;
        int buy=INT_MAX;
        for(int i =0;i<n;i++){

            buy = min(prices[i],buy);
           prof=max(prof,prices[i]-buy);

        }
        return prof;
        
    }
};