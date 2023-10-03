#include <iostream>


void print(int* vec,int tam)
{
    for(int i = 0; i < tam; i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
}