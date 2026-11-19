class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        if(nums.size() <= 3) return 0;
        int max = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
        for(int num: nums)
        {
            if(num > max3)
            {
                if(num > max2)
                {
                    if(num > max)
                    {
                        max3 = max2;
                        max2 = max;
                        max = num;
                    }
                    else
                    {
                        max3 = max2;
                        max2 = num;
                    }
                }
                else
                {
                    max3 = num;
                }
            }
            if(num < min3)
            {
                if(num < min2)
                {
                    if(num < min)
                    {
                        min3 = min2;
                        min2 = min;
                        min = num;
                    } 
                    else
                    {
                        min3 = min2;
                        min2 = num;
                    }
                }
                else min3 = num;
            }
        }
        //max-min3, min2-max2, max3-min
        int result = abs(max-min3);
        if(abs(min2 - max2) < result)
        {
            result = abs(min2-max2);
        }
        if(abs(max3-min) < result)
        {
            result = abs(max3 - min);
        }
        /* cout << max << " " << max2 << " " << max3 << endl;
cout << min << " " << min2 << " " << min3 << endl;
cout << result << endl; */
        return result;

    }
};