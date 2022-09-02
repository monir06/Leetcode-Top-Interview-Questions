class Solution
{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        int cnt[1001] {};
        vector<int> ans;
        for (auto &i : nums1) cnt[i]++;
        for (auto &i : nums2)
            {
                if (cnt[i])
                    {
                        cnt[i]--;
                        ans.push_back(i);
                    }
            }
        return ans;
    }
};
// Time Complexity O(n)
// Space Complexity O(n) or O(maximum element from num1 && num2)