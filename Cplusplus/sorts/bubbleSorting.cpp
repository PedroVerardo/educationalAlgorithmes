#include "../sorting.h"

void bubbleSort(int* vec, int tam)
{
    for (int i = 1; i < tam; ++i)
    {
        for (int j = 0; j < tam - i - 1; ++j)
        {
            if(vec[j] > vec[j+1])
            {
                swapByValue(&vec[j], &vec[j+1]);
            }
        }
    }
}