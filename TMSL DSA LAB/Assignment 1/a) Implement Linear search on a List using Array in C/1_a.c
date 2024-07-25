#include <stdio.h>
int main()
{
    int array[100], search, c, number;
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY\n");
    scanf("%d",&number);
    printf("ENTER %d NUMBERS\n", number);
    for ( c = 0 ; c < number ; c++ )
        scanf("%d",&array[c]);
    printf("ENTER THE NUMBER TO SEARCH\n");
    scanf("%d",&search);
    for ( c = 0 ; c < number ; c++ )
    {
        if ( array[c] == search )   /* if required element found */
        {
            printf("%d IS PRESENT AT LOCATION %d.\n", search, c+1);
            break;
        }
    }
    if ( c == number )
        printf("%d IS NOT PRESENT IN ARRAY.\n", search);
    return 0;
}
