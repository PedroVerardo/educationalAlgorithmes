#include "../sorting.h"
#include <limits.h>
/****************************************info*************************************************
 * A insertionSort apesar de ter complexidade o(n^2) é bastante usada em aglgoritimo hibridos,
 * ela funciona muito bem em arrays de 10 a 20 itens, porem em comparaçao a selection sort a 
 * insertion sort possui um numbero de escritas maior, fazendo com que quando a escrite é cara
 * a selection sort se torna melhor.
**********************************************************************************************/
void insertionSort(int* vec, int tam)
{
    int j;
    int i;
    for( i=1; i < tam; ++i)
    {
        j = i;
        while(j > 0 && vec[j - 1] > vec[j])
        {
            swapByValue(&vec[j - 1], &vec[j]);
            j--;
        }
    }
}

void insertionSortSimpleOptimize(int* vec, int tam)
/*The optimization is in the number of swaps in the sort,
by removing the swap function call and saving the value in the aux integer*/
{
    int i,j, aux;
    for( i=1; i < tam; ++i)
    {
        j = i - 1;
        aux = vec[i];
        while(j >= 0 && vec[j] > aux)
        {
            vec[j + 1] = vec[j];
            --j;
        }

        vec[j + 1] = aux;

    }
}

void shellSort(int* vec, int tam)
/*I don't know why to use this sort, because you use 3 loops and division operation
and is the same process of inserction sort but if i found a answer i put on readme.md*/
{
    int gap, aux, i, j;
    
    for( gap = tam/2; gap> 0; gap /= 2)
    {
        for(i = gap; i < tam; i++)
        {
            j = i - gap;
            aux = vec[i];
            while(j >= 0 && vec[j] > aux)
            {
                vec[j + gap] = vec[j];
                j -= gap;
            }

            vec[j + gap] = aux;
        }
    }
}