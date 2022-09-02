class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int tmp = 1, sz = digits.size();
        reverse(digits.begin(), digits.end());
        for (int i = 0; i < sz; i++)
            {
                tmp = tmp + digits[i];
                digits[i] = tmp % 10;
                tmp /= 10;
            }
        if (tmp) digits.push_back(tmp);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
// Time Complexity O(n)
// Space Complexity O(1)