class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int i, j, sz = nums.size(), ans = 1;
        for (i = 1, j = 1; i < sz; i++)
            {
                while (j < sz && nums[j] == nums[i - 1]) j++;
                if (j >= sz) continue;
                ans++;
                nums[i] = nums[j];
            }
        return ans;
    }
};

// Time Complexity O(n)
// Space Complexity O(1)