class Solution:
    def decode(self, encoded: list[int], first: int) -> list[int]:
        res = [first]
        for i in encoded:
            res.append(i ^ res[-1])
        return res
