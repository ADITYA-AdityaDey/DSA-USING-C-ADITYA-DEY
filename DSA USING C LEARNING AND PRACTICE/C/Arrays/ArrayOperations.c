#include <stdio.h>

int main() {



// Array Operations

// Problem 1: Take an array of integer data type of size 10. Get input from the user and store the values in the array and finally print the sum of those 10 integers.

// int prblm1Arr[10], p1, sum=0;

// printf("ENTER THE VALUES OF THE ARRAY : \n");
// for (p1=0; p1<10; p1++) {
//     scanf("%d", &prblm1Arr[p1]);
// }

// for (p1=0; p1<10; p1++){
//     sum = sum + prblm1Arr[p1];
// }

// printf("SUM OF THE ARRAY : %d\n", sum);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Problem 2: Say you are given the following array of integer datatype [45, 58, 65, 20, 12]. Now write a program which will find the biggest integer and print the integer value.

// int prblm2Arr[5] = {45, 58, 65, 20, 12};
// int max = prblm2Arr[0], p2;

// for (p2=1; p2<=5; p2++) {
//     if (prblm2Arr[p2]>max){
//         max = prblm2Arr[p2];
//     }
// }

// printf("MAX VALUE IS : %d\n", max);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Problem 3: Take three arrays [a, b and ab] of float datatype of size 5. Scan the values of two arrays [a and b] from the user. Now assign the summation of the two arrays to the ab. Finally print the values of ab array.

// float a[5], b[5], ab[5];
// int i;

// printf("Enter The Value Of a : ");
// for (i=0; i<5; i++){
//     scanf("%f", &a[i]);
// }

// printf("Enter The Value Of b : ");
// for (i=0; i<5; i++){
//     scanf("%f", &b[i]);
// }


// for (i=0; i<5; i++){
//     ab[i] = a[i] + b[i];
// }

// printf("Values Of ab array : \n");
// for (i=0; i<5; i++){
//     printf("%f", ab[i]);
// }



/////////////////////////////////////////////////////////////////////////////////////////////////////

// Problem 4: Take an array of integer data type of size 5. Scan the values from the user. Now print the output like the following one :
// Values in array: 10 25 20 15 30
// Sum of odd values: 40
// Sum of even values: 60


int prblm4[5], p4, evenSum = 0, oddSum = 0;

for (p4=0; p4<5; p4++){
    scanf("%d", &prblm4[p4]);
}
printf("Values of Array : ");
for (p4=0; p4<5; p4++){
    printf("%d ", prblm4[p4]);

    if (prblm4[p4] % 2 == 0){
        evenSum = evenSum + prblm4[p4];
    }
    else {
        oddSum = oddSum + prblm4[p4];
    }

}

printf("\nSum of odd values : %d\n", oddSum);
printf("Sum of even values : %d\n", evenSum);


return 0;
}