//#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nums[7];
    int *poin = nums; //&nums[0]
    int move = 5;


    for(;poin<&nums[5]; poin++){
        *poin = move;
        move = move*5;
    }

    int i;
    for(i=0;i<5;i++){
        printf("%d\n", nums[i]);
    }

}



