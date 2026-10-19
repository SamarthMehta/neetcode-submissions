class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s) != len(t):
            return False
        
        hashArr = [0]*26
        for ch in s:
            hashArr[ord(ch) -ord('a')] += 1
        for ch in t:
            hashArr[ord(ch) -ord('a')] -= 1
        
        for num in hashArr:
            if num!=0:
                return False
        return True