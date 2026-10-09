class Solution:
    def maxArea(self, height: list[int]) -> int:
        maxVol = 0
        start = 0
        end = len(height) - 1

        while start<end:
            volume = min(height[start],height[end]) * abs(end-start)
            maxVol = max(maxVol,volume)

            if height[start] < height[end]:
                start +=1
            else:
                end-=1
        
        return maxVol
