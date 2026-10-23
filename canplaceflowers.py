class Solution:
    def canPlaceFlowers(self, flowerbed: list[int], n: int) -> bool:
        count = 0
        for i in range(len(flowerbed)):
            if(flowerbed[i]==0):
                prev = 0 if i == 0 or flowerbed[i-1] == 0 else 1
                next = 0 if i == len(flowerbed) - 1 or flowerbed[i + 1] == 0 else 1

                if (prev == 0 and next == 0):
                    flowerbed[i] = 1
                    count += 1
        return count >= n
        