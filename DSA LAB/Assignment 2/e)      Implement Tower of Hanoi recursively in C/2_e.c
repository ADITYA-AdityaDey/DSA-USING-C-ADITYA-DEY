#include <stdio.h>
void TH(int num, int x, int y, int z)
{
    if(num > 0)
    {
        TH(num - 1, x, z, y);
        printf("From %d to %d \n", x, z);
        TH(num - 1, y, x, z);
    }
}

int main()
{
    int numOfDisc = 3;
    int tower1 = 1, tower2 = 2, tower3 = 3;
    TH(numOfDisc, tower1, tower2, tower3);
}
