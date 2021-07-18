#include<iostream>
#include<fstream>
#include<cassert>

int main(int argc,char* argv[])
{
    double x[3] = {1.90,2.322,4.67};
    double y[3] = {5.098,6.3,7.12};

    std::ofstream write_output("out.txt");

    assert(write_output.is_open());

    for (int i=0;i<3;i++)
    {
        // buffering the output to file with a precision
        write_output.precision(2); 
        write_output << x[i] << " " << "\n";

        write_output.precision(1); 
        write_output << y[i] << " " << "\n";
    }

    write_output.close();

    return 0;
}
