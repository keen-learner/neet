/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
    Input: nums = [1,2,3,1]
    Output: true

Example 2:
    Input: nums = [1,2,3,4]
    Output: false

Example 3:
    Input: nums = [1,1,1,3,3,4,3,2,4,2]
    Output: true

Constraints:
    1 <= nums.length <= 105
    -109 <= nums[i] <= 109
*/

// Time:  O(n), Space: O(n)
public class Solution
{
    public bool ContainsDuplicate(int[] nums)
    {
        HashSet<int> set = new HashSet<int>();
        for (int num in nums)
        {
            set.c return true;
        }
        return false;
    }
}

// Time:  O(nlogn), Space: O(1)
public class Solution1
{
    public bool ContainsDuplicate(int[] nums)
    {
        Arrays.sort(nums);
        for (int i = 0; i < nums.Length - 1; i++)
        {
            if (nums[i] == nums[i+1]) return true;
        }
        return false;
    }
}