class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            /*
                双指针，左指针走前面的0，右指针走非零的数
            */
            int n = nums.size();
            int l = 0, r = 0;
            while (r < n) {
                // 找到0的位置
                while (nums[l]) {
                    l ++;
                }
                if (nums[r] && l < r) {
                    swap(nums[l], nums[r]);
                    l ++;
                }
                r ++;
            }
        }
    };