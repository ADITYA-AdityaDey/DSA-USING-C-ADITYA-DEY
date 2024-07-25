#include <stdio.h>

int main() {

    int arr[5];

    arr[0] = 100; 
    arr[1] = 200;
    arr[2] = 300; 
    arr[3] = 400;
    arr[4] = 500;

    int new = arr[3] + arr[4];

    printf("%d\n", new);

////////////////////////////////////////////////////////////

    int array[4] = {1000, 2000, 3000, 4000};

    printf("VALUE OF INDEX O : %d\n", array[0]);

///////////////////////////////////////////////////////////////


int arrLoop[4] = {1, 2, 3, 4};

int i;

for (i = 0; i < 4; i++)
{
   printf("%d\n", arrLoop[i]);
}

/////////////////////////////////////////////////


int arrayLoopScanf[3];

int loopvalue1;

for (loopvalue1 = 0; loopvalue1 < 5; loopvalue1++)
{
    scanf("%d\n", &arrayLoopScanf[loopvalue1]);
}

for (loopvalue1=0; loopvalue1<5; loopvalue1++) {

    printf("%d\n", arrayLoopScanf[loopvalue1]);


}




    return 0;
}