class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,0);
        int PId = 0;
        int NId = 1;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > 0) {
                result[PId] = nums[i];
                PId += 2;
            }
            else {
                result[NId] = nums[i];
                NId += 2;
            }
        }
        return result;
        
    }
};