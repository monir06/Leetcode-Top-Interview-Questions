class Solution
{
public:
    int myAtoi(string s)
    {
        while (!s.empty() && s.front() == ' ')
            s.erase(s.begin());
        if (s.front() != '-' && s.front() != '+' && !isdigit(s.front())) return 0;
        int in = (isdigit(s[0]) == false);
        long long ans = 0;
        while (in < s.size())
            {
                if (!isdigit(s[in])) break;
                ans = ans * 10 + s[in] - '0';
                in++;
                if (ans > INT_MAX) break;
            }
        if (s.front() == '-') ans = -ans;
        if (ans < INT_MIN) ans = INT_MIN;
        if (ans > INT_MAX) ans = INT_MAX;
        return ans;
    }
};
// Time Complexity O(n) or O(string length)
// Space Complexity O(1)