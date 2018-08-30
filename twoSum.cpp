class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> targetArr;
        targetArr.reserve(2);
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    targetArr.push_back(i);
                    targetArr.push_back(j);
                    targetArr.resize(2);
                    break;
                }
            }
        }
        return targetArr;
    }
};
