class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> valueToIndex;
        for (int i = 0; i < nums.size(); i++){
            auto found = valueToIndex.find(target - nums[i]);
            if(found != valueToIndex.end()){
                int foundIndex = found->second;
                return {foundIndex, i};
            }
            valueToIndex[nums[i]] = i;
        }
        return {};
    }
};
