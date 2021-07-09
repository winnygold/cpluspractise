#include<iostream>
#include<vector>
int main()
{
    // 2D vector template 
    std::vector<std::vector<int>> my_matrix
                {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12}
                };
    
    for (std::vector<int> vect1D : my_matrix)
    {
        for (int x : vect1D)
        {
            std::cout << x << " ";
        }   
        std::cout << std::endl;
    }
    return 0;
}
