class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        vector<int> result;
        for(int i = 0; i<n-1; i++)
        {
            
            
                int sum = weights[i] + weights[i+1];
                result.push_back(sum);
            
        }
        sort(begin(result),end(result));
        int s = result.size();
        long mini = 0;
        long maxi = 0;
        for(int  i=0; i<k-1; i++)
        {
            mini+= result[i];
            maxi += result[s-1-i];
        }
        return maxi-mini;
    }
};