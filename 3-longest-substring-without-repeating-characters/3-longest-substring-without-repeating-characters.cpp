class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        map<char, int> mp;
        vector<int> v;
        int cnt = 0, sz = s.size(), l = 0;
        for (auto i : s)
            mp[i] = -1;
        int i = 0;
        while (i < sz)
        {
            if (mp[s[i]] != -1)
                l = max(mp[s[i]], l);

            cnt = max(cnt, i - l + 1);
            mp[s[i]] = i + 1;
            i++;
        }

        return cnt;
    }
};