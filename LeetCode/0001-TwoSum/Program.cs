using System;

namespace _1_Two_Sum
{
    public class Solution
    {
        public static int[] TwoSum(int[] nums, int target)
        {
            int[] result;
            result = new int[2];
            for (int i = 0; i < nums.Length; i++)
            {
                for (int j = 0; j < nums.Length; j++)
                {
                    if (i == j)
                    {
                        continue;
                    }

                    if (nums[i] + nums[j] == target)
                    {
                        result[0] = i;
                        result[1] = j;
                        return result;
                    }
                }
            }
            return result;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int target = 10;
            int[] num_in = {3, 5, 7, 3, 6, 9, 10, 14, 7};
            int[] res = Solution.TwoSum(num_in, target);
            Console.WriteLine("result[0]:{0}, result[1]:{1}", res[0], res[1]);
        }
    }
}
