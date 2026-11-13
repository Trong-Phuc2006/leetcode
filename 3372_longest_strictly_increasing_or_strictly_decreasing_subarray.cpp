class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int maxLength = 1;
        int length = 1;
        int left = 0, right = 1;
        while(nums[left] == nums[right] && right + 1 < nums.size())
        {
            left++;
            right++;
            if(right == nums.size()-1 && nums[left] == nums[right]) return 1;
        }
        if(nums[left] == nums[right] && nums.size() == 2) return 1;
        bool inc = true;
        while(left < right && right < nums.size())
        {
            if(nums[right] < nums[left]) inc = false;
            else if(nums[right] > nums[left]) inc = true;
            if(inc)
            {
                while(nums[right] > nums[right-1] && right + 1 < nums.size() )
                {
                    right++;
                }
                length = right-left;
                if(right == nums.size()-1 && nums[right] > nums[right-1]) length += 1;
                if(length > maxLength) maxLength = length;
                left++;
                right = left+1;
            }
            if(!inc)
            {
                 while(nums[right] < nums[right-1] && right + 1 < nums.size() )
                {
                    right++;
                }
                length = right-left;
                if(right == nums.size()-1 && nums[right] < nums[right-1]) length += 1;
                if(length > maxLength) maxLength = length;
                left++;
                right= left+ 1;
            }
        }
        return maxLength;
    }
};