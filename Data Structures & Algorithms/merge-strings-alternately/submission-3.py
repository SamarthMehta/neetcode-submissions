class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:

        result = ""
        length1 = len(word1)
        length2 = len(word2)
        i = j = 0
        while i < length1 and j < length2:
            result += word1[i]
            i += 1
            result += word2[j]
            j+=1
        while i <length1:
            result += word1[i]
            i+=1
        while j< length2:
            result += word2[j]
            j+=1
        return result
        