class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int el1=0,el2=0;
    int cnt1=0,cnt2=0;
    vector<int>result;

    for(int &num:nums) {
        if(cnt1==0&&num!=el2) {
            el1=num;
            cnt1=1;
        }
        else if(cnt2==0&&num!=el1) {
            el2=num;
            cnt2=1;
        }
        else if(num==el1) cnt1++;
        else if(num==el2) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    
    cnt1=0;
    cnt2=0;

    for(int &num:nums) {
        if(el1==num) cnt1++;
        if(el2==num) cnt2++;
    }

    if(cnt1>nums.size()/3) result.push_back(el1);
    if(el1==el2) return result;
    if(cnt2>nums.size()/3) result.push_back(el2);

    return result;
    }
};