
/*
 * Count negative numbers in a NxN sorted Matrix (sorted rows)
 * */

#include <stdio.h>

#define SIZE 3

int countNegativeP:\XAMPP\htdocs\solving_problems\solved_problems\negatives_sortMatrixs(int matrix[SIZE][SIZE]);

int main(){
    
    int matrix[SIZE][SIZE] = { 
        {-3, 2, 3}, 
        {-1,0,1}, 
        {-23,-15,2} 
    };

    int res = 0;

    res = countNegatives(matrix);
    printf("\n Total: %d negative numbers ",res);

    return 0;
}

int countNegatives(int matrix[SIZE][SIZE]){

    int count = 0, j = SIZE-1, i = 0;
   
    while( i<SIZE && j>=0 ){

        if(matrix[i][j] < 0){
            count += j+1;
            i++;
            j = SIZE-1;
        }else
            j--;
    }

    return count;
}
