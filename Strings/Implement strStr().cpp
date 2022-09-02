class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty()) return 0;
        for (int i = 0; i < haystack.size(); i++)
            {
                int j = i, k = 0;
                while (k < needle.size() && j < haystack.size() && haystack[j] == needle[k])
                    {
                        j++;
                        k++;
                    }
                if (k == needle.size()) return i;
            }
        return -1;
    }
};
// Time Complexity O(n*m) [n=haystack.length & m=needle.length]
// Space Complexity O(1)