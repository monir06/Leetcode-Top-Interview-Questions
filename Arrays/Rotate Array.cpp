class Solution
{
public:
    void reverse(vector<int>& nums, int l, int r)
    {
        while (l < r)
            {
                swap(nums[l], nums[r]);
                l++;
                r--;
            }
    }
    void rotate(vector<int>& nums, int k)
    {
        int sz = nums.size();
        k %= sz;
        reverse(nums, 0, sz - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, sz - 1);
    }
};
// Time Complexity O(n)
// Space Complexity O(1)