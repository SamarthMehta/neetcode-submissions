class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}

        for i in range(len(nums)):
            complementVal = target - nums[i]
            if complementVal in map:
                return [map[complementVal],i]
            else:
                map[nums[i]] = i
        return []