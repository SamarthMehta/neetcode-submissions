class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        l = []
        strs.sort()
        str1 = strs[0]
        str2 = strs[-1]

        n = min(len(str1),len(str2))
        for i in range(n):
            if str1[i] == str2[i]:
                l.append(str1[i])
            else:
                break
        return "".join(l)
