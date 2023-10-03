#include "../sorting.h"


//Hoare's partitioning
//To-DO

//Lomuto's partitioning O(N) || N = last_pos - ini_pos
int partitionLomuto(int* vec, int ini_pos, int last_pos)
{
    int j, i = ini_pos;
    for(j = ini_pos; j < last_pos; j++)
    {
        if(vec[j] <= vec[last_pos])
        {
            swapByValue(&vec[j], &vec[i]);
            i++;
        }
    }
    swapByValue(&vec[last_pos], &vec[i]);
    return i;
}


/*Caso médio O(N*log(N))
 *Pior caso O(N^2) */
void quickSort(int* vec, int ini_pos, int last_pos)
{
    if (ini_pos >= last_pos) {return;}

    int pivot = partitionLomuto(vec, ini_pos, last_pos);
    quickSort(vec, ini_pos, pivot - 1);
    quickSort(vec, pivot + 1, last_pos);
}