class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        l = []
        maxLen = max(len(word2),len(word1))
        i = 0
        while i < maxLen:
            if i < len(word1):
                l.append(word1[i])
            if i < len(word2):
                l.append(word2[i])
            i += 1
        return "".join(l)