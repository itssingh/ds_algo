class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int res=0;
        vector<int>last_ind(256,-1);
        int i=0;
        for(int j=0;j<n;j++){
            i = max(i, last_ind[s[j]] + 1);
            res = max(res, j - i + 1);
            last_ind[s[j]] = j;
        }
        return res;
    }
};
