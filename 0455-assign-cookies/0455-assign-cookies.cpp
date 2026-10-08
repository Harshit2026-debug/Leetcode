class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int gPoint=0;
        int sPoint=0;
        int satisfiedChild=0;

        while(gPoint<g.size()&& sPoint<s.size()) {
            if(g[gPoint]<=s[sPoint]) {
                satisfiedChild++;
                gPoint++;
                sPoint++;
            }else {
                sPoint++;
            }
        }
        return satisfiedChild;
    }
};