class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int idx = 0;
        int flag = 0;
        for(int i = 1 ; i<nums.size()-1; i++){
            if(nums[i]>nums[i-1] && nums[i]> nums[i+1]) {
                flag = 1;
                return i;
            }
        }
      int max = INT_MIN;
        if(flag == 0){
          for(int i = 0 ; i<nums.size() ; i++){
                if(nums[i]>max){
                idx = i;
                max = nums[i];
            }
          }
        }

        return idx;
    }
};