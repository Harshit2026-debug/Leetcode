class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for (int i=0; i<nums1.size(); i++) {
             for(int j=0; j<nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    bool exist = false;
                    for(int k=0; k<result.size(); k++) {
                        if(nums2[j] == result[k]) {
                            exist =  true;
                            break;
                        }
                    }
                    if(!exist) {
                        result.push_back(nums2[j]);
                        break;
                    }
                
            }
        }
        }
           

        return result;
        
    }
};