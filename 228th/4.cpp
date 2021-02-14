/*
create map< key, value[] >
transform from graph to map ascending
1 2,3,4
2 1,3,5
3 1,2,6
4 1
5 2
6 3

start finding trio
loop to find trio untilt the end:
1 (2),3,4 go to node 2
2 -1-,(3),5 found 1 and go to node 3
3 -1-,-2-,6 if found trio = found node 1 and node 2
collect those trios
[ {1, 2, 3}, ...]

find degree
loop in trios:
    // {1, 2, 3}
    loop in the trio:
        ans += number of !find in trio
        example 1 2,3,(4) ans += 1 because 2 and 3 is trio subset 

*/