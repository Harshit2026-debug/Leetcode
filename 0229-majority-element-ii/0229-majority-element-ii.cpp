class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        vector<int> res;

        for(int &num:nums) {
            mp[num]++;
        }
        for(auto &it:mp) {
            if(it.second > n/3) res.push_back(it.first);
        }
        return res;
    }
};