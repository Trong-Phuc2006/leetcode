class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> pos;
        for(int i = 0; i < nums.size(); i++)
        {
            pos[nums[i]] = i;
        }
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if(pos.contains(target-num) && pos[target-num] != i)
            {
                result.push_back(i);
                result.push_back(pos[target-num]);
                break;
            }
        }
        return result;
    }
};