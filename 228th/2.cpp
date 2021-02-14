/*
declare character c, set first index in input to c
declare count character clc, set one to cc
declare ans, set zero to ans
loop char in input til last index - 1:
    if c is equal to next char:
        plus one to cc
        continue
    ans += (cc+1)cc/2 or accumulate count from 1 to itself
    set clc to one
calculate last index
ans += (cc+1)cc/2

test
xyxxzzzy
x != y, ans += 1 -> cc = 1
y != x, ans += 1 -> cc = 1
x == x, cc += 1 -> cc = 2
x != z, ans += 3 -> cc = 1
z == z, cc += 1 -> cc = 2
z == z, cc += 1 -> cc = 3
z != y, ans += 5 -> cc = 1
y cc = 1, ans += 1
*/
