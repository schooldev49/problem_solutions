class Solution:
    def finalValueAfterOperations(self, operations: list[str]) -> int:
        x = 0
        for i in operations:
            x += 1 if "+" in i else -1

        return x
