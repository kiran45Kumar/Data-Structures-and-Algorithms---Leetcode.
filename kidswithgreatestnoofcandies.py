class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        max = -1
        for i in candies:
            if (i > max):
                max = i
        result = []
        for i in candies:
            if ( i + extraCandies >= max):
                result.append(True)
            else:
                result.append(False)
            
        return result
        