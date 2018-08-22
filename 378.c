int kthSmallest(int** matrix, int matrixRowSize, int matrixColSize, int k) {
    int min = matrix[0][0], max = matrix[matrixRowSize - 1][matrixColSize - 1], mid;
    while(min < max){
        mid = (min + max) / 2;
        int num = 0;
        for(int i = 0; i < matrixRowSize; i++){
            int row = 0;
            for(int j = 0; j < matrixColSize; j++){
                if(matrix[i][j] <= mid){
                    row++;
                }else{
                    break;
                }
            }
            num += row;
        }
        if(num < k) min = mid + 1;
        else max = mid;
    }
    return min;
}
