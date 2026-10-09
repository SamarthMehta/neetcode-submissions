class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}

        for i in range(0,len(nums)):
            sub = target - nums[i]

            if sub in map:
                return [map[sub],i]
            map[nums[i]] = i
        return []