// Resolvido em 04/02/2024
class Solution { // Greedy - Time O(n) - Space O(1)
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        const int LEN = prices.size();
        int minv = prices[0], ans = 0;
        for(int i = 1; i < LEN; i++){
            ans = max(ans, prices[i]-minv);
            minv = min(minv, prices[i]);
        }
        return ans;
    }
};