class Solution:
    def isVowel(self, ch):
        return ch in "aeiouAEIOU"

    def reverseVowels(self, s: str) -> str:
        ch = list(s)
        start = 0
        end = len(ch) - 1

        while start < end:
            if not self.isVowel(ch[start]):
                start += 1
            elif not self.isVowel(ch[end]):
                end -= 1
            else:
                ch[start], ch[end] = ch[end], ch[start]
                start += 1
                end -= 1

        return "".join(ch)


