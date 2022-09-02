class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if (strs.size() == 1) return strs[0];
        string ans = "";
        int mn = INT_MAX;
        for (int i = 0, sz = strs.size(); i < sz; i++)
            {
                for (int j = i + 1; j < sz; j++)
                    {
                        int in1 = 0, in2 = 0, sz1 = strs[i].size(), sz2 = strs[j].size();
                        while (in1 < sz1 && in2 < sz2 && strs[i][in1] == strs[j][in2])
                            {
                                in1++;
                                in2++;
                            }
                        mn = min(mn, min(in1, in2));
                    }
            }
        for (int i = 0; i < mn; i++) ans += strs[0][i];
        return ans;
    }
};
// Time Complexity O(n^3)
// Space Complexity O(n)