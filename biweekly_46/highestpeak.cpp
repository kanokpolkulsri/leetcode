/*
create -1 map:
    find zero and one around that cell

loop in map:
    if cell is -1:
        find the cell around that is greater than zero and find min:
            assign that cell = min + 1
            min = max.value
*/