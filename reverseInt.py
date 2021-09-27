class Solution:
    def reverse(self, x: int) -> int:
        if x == 0 or x >= 2 ** 31:
            return 0
        n = True if x < 0 else False
        number = abs(x)
        revs_number = 0
        while (number > 0):  
            remainder = number % 10  
            if (revs_number > (2 ** 31 - 1) /10 or (revs_number == (2 ** 31 - 1) / 10 and remainder > 7)):
                return 0
            if (revs_number < (-2 ** 31) /10 or (revs_number == (-2 ** 31) / 10 and remainder < -8)):
                return 0
            revs_number = (revs_number * 10) + remainder  
            number = number // 10  
        return -revs_number if n else revs_number
