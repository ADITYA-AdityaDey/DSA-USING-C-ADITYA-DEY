#include <stdio.h>
int main()
{

    int yourValue;

    printf("ENTER YOUR VALUE FRO CHECKING : ");
    scanf("%d", &yourValue);

    if (yourValue > 0)
    {
        printf("YOUR VLUE IS POSITIVE");
    }
    else if (yourValue < 0)
    {
        printf("YOUR VALUE IS NEGATIVE");
    }
    else{

        printf("YOUR VALUE IS ZERO");
    }
    return 0;
}