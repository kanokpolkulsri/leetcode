/*
BUG

declare lc to keep last char
declare clc to leep last char count
declare ans
loop in string index:
    if lc is not equal to 0 or 1:
        give the current char to lc
        let clc be one
        continue
    if lc and currect char is the same:
        plus one to clc
    else
        if clc is greater than one:
            ans += floor clc/2
        let clc be one
        give the current char to lc
if clc is greater than one:
    ans += floor clc/2


test
1001
1 lc 1, clc 1
0 lc 1, clc 1
0 lc 0, clc 2
1 lc 0, 

0011
0 lc 0, clc 1
0 lc 0, clc 2
1 lc 0, answer += 1 and clc 1
1 lc 1, clc -> 2
ans += 1

1110
1 lc 1, clc 1
1 lc 1, clc 2
1 lc 1, clc 3
0 lc 1, go to else condition:
    ans += floor 3/2 -> 1

1111
1 lc 1, clc 1
1 lc 1, clc 2
1 lc 1, clc 3
1 lc 1, go to else condition:
    ans += floor 4/2 -> 2
*/
