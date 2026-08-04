class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int Sum = 0;
    int Maxi = INT_MIN;

    for(int &num: nums) {
        Sum += num;

        if(Maxi<Sum) Maxi = Sum;

        if(Sum < 0) Sum = 0;
    }
    return Maxi;
        
    }
};