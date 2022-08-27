class Solution {
public:
    int maxProfit(vector<int>&v) {
     
       int mn = v[0];
       int profit = 0;
       for(int i=1;i<v.size();i++)
       {
           mn = min(mn,v[i]);
          profit = max(profit,v[i]-mn);
           
       }
        return profit;
       
    }
};