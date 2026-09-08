class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int product=1;
        sort(nums.begin(),nums.end());

        int product1=nums[0]*nums[1]*nums[nums.size()-1];
        int product2= nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];

        return max(product1,product2);
        
    }
};