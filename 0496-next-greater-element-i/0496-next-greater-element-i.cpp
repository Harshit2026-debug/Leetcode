class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> mp;
        stack<int> st;

        for(int i=n-1; i>=0; i--) { 
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            } 

            mp[nums2[i]] = st.empty()? -1: st.top();

            st.push(nums2[i]);
        }
            
            vector<int> res;
            for(int x: nums1) {
                res.push_back(mp[x]);
            }
            return res;
        
    }
};