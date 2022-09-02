class Solution
{
public:
    bool isPalindrome(string s)
    {
        string r = "";
        for (auto i : s)
            {
                if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) r += tolower(i);
                else if (isdigit(i)) r += i;
            }
        string d = r;
        reverse(r.begin(), r.end());
        return r == d;
    }
};
// Time Complexity O(n)
// Space Complexity O(n)