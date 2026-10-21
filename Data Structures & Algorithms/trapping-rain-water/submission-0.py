class Solution:
    def trap(self, height: List[int]) -> int:
        waterCount = 0
        start = 0
        end = len(height)-1
        leftMax = 0
        rightMax = 0

        while start <= end:
            leftMax = max(leftMax,height[start])
            rightMax = max(rightMax,height[end])

            if leftMax > rightMax:
                waterCount += rightMax - height[end]
                end -= 1
            else:
                waterCount += leftMax - height[start]
                start += 1
        
        return waterCount