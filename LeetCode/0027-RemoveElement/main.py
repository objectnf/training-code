from typing import List


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        index = 0
        while index <= len(nums):
            if index == len(nums):
                break
            elif nums[index] == val:
                del nums[index]
                index -= 1
            index += 1
        return len(nums)


number = [0, 1, 2, 2, 3, 0, 4, 2]
delval = 2
ins = Solution()
reslen = ins.removeElement(number, delval)
print(number)
print(reslen)
