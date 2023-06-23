class Solution
{
public:
  int reverse(int x)
  {
    int result = 0;
    int reminder = 0;

    while (x != 0)
    {
      reminder = x % 10;
      x /= 10;
      if (result > INT_MAX / 10 || result < INT_MIN / 10)
      {
        return 0;
      }
      result = (result * 10) + reminder;
    }

    if (result > INT_MAX || result < INT_MIN)
    {
      return 0;
    }

    return result;
  }
};