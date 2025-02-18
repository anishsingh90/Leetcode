class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2, -1);
        int st=0, en=numbers.size()-1;

        while(st<en){
            if(numbers[st] + numbers[en] == target){
                ans[0] = st + 1;
                ans[1] = en+1;
                break;
            }
            if(numbers[st] + numbers[en] > target) en--;
            if(numbers[st] + numbers[en] < target) st++;
        }
        return ans;
    }
};