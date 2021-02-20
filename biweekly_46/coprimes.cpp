/*

function check gcd:
    if root: assign -1
    loop find gcd: 
        if gcd == 1:
            find is true
            assign that node number to current index found gcd
            break
    if !find: assign that -1 to current index found gcd
    remove last value in array

convert to directed tree

recursive:
    loop deep to the left:
        recursive
        if next node is not null:
            push each vistited to array
    check gcd from array
    loop deep to the left:
        recursive
        if next node is not null:
            push each vistited to array
    check gcd from array

*/