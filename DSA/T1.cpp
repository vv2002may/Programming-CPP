class Solution
{
public:
  int longestString(int x, int y, int z)
  {
    int ans = z * 2;
    if (x > y)
    {
      ans += 2 * y + (y + 1) * 2;
    }
    else if (y > x)
    {
      ans += 2 * x + (x + 1) * 2;
    }
    else
    {
      ans += 4 * x;
    }
    return ans;
  }
};