class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minv=prices[0];
        int sum=0;
        for(int i=1;i<prices.size();i++){
            
            {

                
                sum=max(sum,prices[i]-minv);
                minv=min(minv,prices[i]);
                

            }
        }
        return sum;

    }
     
};
