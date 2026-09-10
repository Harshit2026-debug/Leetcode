class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> st(nums.begin(), nums.end());

    int maxConsecutive = 0;

    for (int x : st) {

        // x is the beginning of a sequence
        if (st.find(x - 1) == st.end()) {

            int current = x;
            int cnt = 1;

            while (st.find(current + 1) != st.end()) {
                current++;
                cnt++;
            }

            maxConsecutive = max(maxConsecutive, cnt);
        }
    }

    return maxConsecutive;
        
    }
};