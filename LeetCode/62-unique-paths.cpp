// Resolvido em 29/01/2024
class Solution { // Math - Combinatorics - Time O(n) - Space O(1)
public:
    int uniquePaths(int m, int n) {
        long long int ans = 1;
        int aux = --m+--n;
        if(n > m) swap(n, m);
        while(aux > m){
            ans *= aux--;
            while(n > 0 && ans % n == 0) ans /= n--;
        }
        return ans;
    }
};