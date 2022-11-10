#include <stdio.h>
#include <stdlib.h>

//array is just holding multiple variables

int main()
{
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42}; // [] - after name stores multiple pieces of information
                       // 0  1   2   3   4   5
    luckyNumbers[1] = 200;
    printf("%d", luckyNumbers[1]);

    return 0;
}

/*

----------------------------

#include <stdio.h>
#include <stdlib.h>

//array is just holding multiple variables

int main()
{
    //char phrase[20] = "Array";
    int luckyNumbers[10];
    luckyNumbers[1] = 80;
    luckyNumbers[0] = 90;
    printf("%d", luckyNumbers[0]);

    return 0;
}
*/