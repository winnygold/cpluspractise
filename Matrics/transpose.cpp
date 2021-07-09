// Transpose a matrix

#include<iostream>
#include<vector>

int main()
{   
    //declaring 3x3 vector (matrix)
    std::vector<std::vector<int>>matrix(3,std::vector<int>(3));
    matrix = {
        {1,2,3},
        {3,4,5},
        {6,7,8}
    };
    // getting the size of the matrix (rows and column)
    int row_size = matrix.size();
    int column_size = matrix[0].size();
    std::vector<std::vector<int>>result(column_size, std::vector<int>(row_size));

    std::cout << "-- Input Matrix -- "<< std::endl;
    for (int i=0;i<row_size;i++)
    {
        for (int j=0;j<column_size;j++){
            // printing the input matrix
            std::cout << matrix[i][j] << " ";
            // inversing the index 
            result[i][j] =matrix[j][i];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "-- Transposed Matrix -- "<< std::endl;
    // cout the transposed matrix
    for (int i=0;i<row_size;i++)
    {
        for (int j=0;j<column_size;j++){
            std::cout << result[i][j]<< " ";
        }
        std::cout << std::endl;
    }

}