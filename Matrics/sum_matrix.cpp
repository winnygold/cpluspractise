// sum the rows of a matrix

#include<iostream>
#include<vector>

int main()
{
    std::vector<std::vector<int>>matrix
                {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12}
                };
    
    int row_size = matrix.size();
    int column_size = matrix[0].size();
    std::cout << "row size : " << row_size << std::endl;
    std::cout << "column size : " << column_size << std::endl;

    for (int i=0 ; i<row_size ;i++)
    {
        int interim_resut=0;
        for (int j=0 ; j<column_size ; j++)
        {
            interim_resut +=matrix[i][j];
        }
        std::cout << interim_resut<< std::endl;
    }
    return 0;
}