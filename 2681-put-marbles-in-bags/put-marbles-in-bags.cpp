class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        // 2n similar type solution
        int n = weights.size();
        int m = n-1;
        vector<int>result(m,0);
        for(int i=0;i<m;i++)
        {
            result[i] = weights[i] + weights[i+1];
        }
        sort(begin(result), end(result));
        long mini = 0; 
        long maxi = 0;
        for(int i=0; i<k-1;i++)
        {
            mini +=result[i];
            maxi += result[m-1-i];
        }
        return maxi-mini;
    }
};