class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;
        // s will be the size of subarray
        for(int s = l; s <= r; s++)
        {
            int left = 0, right = 0;
            int sum = 0;
            while(right < nums.size())
            {
                sum += nums[right];
                right++;
                if(right - left > s)
                {
                    sum -= nums[left];
                    left++;
                }
                if (right - left == s && sum > 0) {
                    minSum = min(minSum, sum);
                }
     
            }
        }
        return minSum == INT_MAX? -1:minSum;
    }
};