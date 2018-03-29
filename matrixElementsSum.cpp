int matrixElementsSum(std::vector<std::vector<int>> matrix) {
int price = 0;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){

           if(matrix[i][j]== 0 && matrix.size() -1 != i){
               matrix[i+1][j] = 0;
           }
            else
                price += matrix[i][j];
            }
    }

    return price;
}
