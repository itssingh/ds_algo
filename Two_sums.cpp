class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int no;
        vector<int> two_no(2);
        for(int i=0;i<nums.size();i++){
            no=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==no){
                    two_no[0]=i;
                    two_no[1]=j;
                }
            }
            
        }
        return two_no;
    }
};
