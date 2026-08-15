class Solution {
public:
    void FirstOccurence(vector<int>&nums,vector<int>&result,int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(nums[mid]>=target) {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
         if (ans == -1 || nums[ans] != target) ans = -1;
        result.push_back(ans);
    }

    void LastOccurence(vector<int>&nums,vector<int>&result,int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(nums[mid]<=target) {
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        if (ans == -1 || nums[ans] != target) ans = -1;

        result.push_back(ans);
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;

        FirstOccurence(nums,result,target);
        LastOccurence(nums,result,target);

        return result;
        
    }
};