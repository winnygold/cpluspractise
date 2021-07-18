#include<cassert>
#include<iostream>
#include<fstream>

int main(int argc , char* argv[])
{
    double x[3] = {0.0,0.1,0.2};
    double y[3] = {0.0,0.1,0.3};
   
    // initiate the ofstream instance with file name 
    std::ofstream write_output("data.txt");
    
    // check whether the file is open , if not throw error
    assert(write_output.is_open());

   
    for(int i=0;i<3;i++)
    {
        // buffer output
        write_output << x[i] << " " << y[i] << "\n";
    
    }
    // close the file
    write_output.close();
    return 0;
}
