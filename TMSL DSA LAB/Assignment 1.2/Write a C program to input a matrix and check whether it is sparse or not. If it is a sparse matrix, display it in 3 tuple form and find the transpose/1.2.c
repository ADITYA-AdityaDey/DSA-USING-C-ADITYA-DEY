#include <stdio.h>
 
int main(){
    int rows, cols, row, col, count=0;
    int matrix[50][50];
    
    printf("ENTER ROWS AND COLUMNS OF MATRIX : \n");
    scanf("%d %d", &rows, &cols);
     
    printf("ENTER THE SIZE OF MATRIX %dX%d\n", rows, cols);
     
    for(row = 0; row < rows; row++){
        for(col = 0; col < cols; col++){
            scanf("%d", &matrix[row][col]);
        }
    }
     
    /* Count the number of Zero's(0) in Matrix */ 
    for(row = 0; row < rows; row++){
        for(col = 0; col < cols; col++){
            if(matrix[row][col] == 0){
             count++;
            }
        }
    }
    
    if(count > (rows*cols)/2){
        printf("INPUT MATRIX IS A SPARSE MATRIX\n");
    } else {
        printf("INPUT MATRIX IS NOT A SPARSE MATRIX\n");
    }

    return 0;
}
