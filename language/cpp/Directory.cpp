#include <iostream>

#include <cstdio>
#include <cstdlib>


class Directory
{
public :
    Directory()
    {
        std::size_t disks = tfs.numDisks();
        std::cout <<disks <<std::endl;
    };
};



int main(void)
{
    Directory tempDir;
    return EXIT_SUCCESS;
}