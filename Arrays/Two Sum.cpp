class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            {
                int val = nums[i];
                mp[val] = i;
            }
        for (int i = 0; i < n; i++)
            {
                int b = target - nums[i]; // t=b-a
                if (mp[b] && i != mp[b])
                    return {i, mp[b]};
            }
        return {1, 2};
    }
};
// Time Complexity O(nlogn)
// Space Complexity O(n)