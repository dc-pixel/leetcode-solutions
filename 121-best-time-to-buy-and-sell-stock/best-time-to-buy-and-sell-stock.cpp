class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int mini=INT_MAX;
        int maxi=0;
        int n=prices.size();


        for(int i=0;i<n;i++){
            int p = prices[i];
            mini=min(mini,p);
            maxi=max(maxi,p-mini);
        }
        return maxi;
    }

};