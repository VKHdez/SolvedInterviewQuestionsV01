
/*
 * Count negative numbers on a sorted matrix
 * */

class Solution{

    private int size;

    public Solution(int matrix[][], int size){
        this.size = size;
        findNegativeNumbers(matrix,size);
    }

    private void findNegativeNumbers(int matrix[][], int size){
        int count = 0, i = 0, j = size -1;

        while(i<size && j>=0){
            if(matrix[i][j] < 0){
                count += j+1;
                i++;
                j = size -1;
            }else
                j--;
        }

        System.out.println("Negative Numbers :"+count);
    }

    public static void main(String args[]){

        int size = 3;
        int matrix[][] = {
            {-3,1,2},
            {-1,0,1},
            {-23,-15,2}
        };

        Solution s1 = new Solution(matrix, size);
    }
}


