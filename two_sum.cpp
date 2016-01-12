// Return index of number in array

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int> checkTable;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (checkTable.find(target - nums[i]) == checkTable.end())
            {
                checkTable[nums[i]] = i;
            }
            else
            {
                result[0] = checkTable[target - nums[i]] + 1;
                result[1] = i + 1;
            }
        }
        return result;
    }
    
};