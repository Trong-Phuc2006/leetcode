class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long result = 0;
        const long long MOD = 1000000007;
        vector<int> sum (arr.size());
        sum[0] = arr[0];
        for(int i = 1; i < arr.size(); i++)
        {
            sum[i] = sum[i-1] + arr[i];
            cout << sum[i] << " ";
        }
        int evenArr = 0, oddArr = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(sum[i] % 2 == 0)
            {
                result += oddArr;
                evenArr++;
            }
            else
            {
                result += evenArr;
                result++;
                oddArr++;
            }

        }
    return result % MOD;
    }
};