/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        long long x1 = x;
        long long t = 0, m = 0;
        if (x1 < 0)
        {
            x1 *= -1;
            m = 1;
        }
        while (x1 > 0)
        {
            t *= 10;
            t += x1 % 10;
            x1 /= 10;
        }
        if (m == 1)
            t *= -1;
        if (t > 2147483647 || t < -2147483649)
            return 0;
        return t;
    }
};
// @lc code=end
