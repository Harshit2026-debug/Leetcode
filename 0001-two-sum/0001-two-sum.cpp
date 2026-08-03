class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;  // {number : index}

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];  // number we need to find

            // if we already saw that required number before
            if (mp.count(diff))  
                return {mp[diff], i};

            // otherwise, remember this number and its index
            mp[nums[i]] = i;
        }

        return {};  // return empty vector if no pair found
    }
};
