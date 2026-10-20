class Solution:
    def maxArea(self, heights: List[int]) -> int:
        maxVal = 0
        start = 0
        end = len(heights) - 1
        while start <= end:
            area = min(heights[start],heights[end]) * (end-start)
            maxVal = max(maxVal,area)

            if heights[start]<heights[end]:
                start += 1
            else:
                end -= 1
        return maxVal