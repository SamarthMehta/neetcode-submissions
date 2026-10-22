class Solution:
    def checkPalindrome(self,start,end,string):
        while start <= end:
            if string[start]!=string[end]:
                return False
            start += 1
            end -=1
        return True

    def validPalindrome(self, s: str) -> bool:
        start = 0
        end = len(s)-1

        while start <= end:
            if s[start] == s[end]:
                start += 1
                end -= 1
            else:
                return self.checkPalindrome(start+1,end,s) or self.checkPalindrome(start,end-1,s)
        return True