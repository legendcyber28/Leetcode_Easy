class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftmaxi(n);
        vector<int> rightmaxk(n);

        for(int j = 1; j<n; j++)
        {
            leftmaxi[j] = max(leftmaxi[j-1], nums[j-1]);

        }
        for(int j = n-2; j>=0; j--)
        {
            rightmaxk[j] = max(rightmaxk[j+1], nums[j+1]);
        }
        long long result = 0;
        for(int j =1; j<n; j++)
        {
            result  = max(result , (long long)(leftmaxi[j]-nums[j])*rightmaxk[j]);
        }
        return result;
    }
};