class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(); // n = size of the nums array
        int reset = 0;
        int counter = 0; 

        for(int i = 0; i < n; i++){
            if(nums[i] == 1) {
                counter++;
                reset = max(reset, counter);
            }
            else {
                counter = 0;
            }
        }
        return reset;
    }
};