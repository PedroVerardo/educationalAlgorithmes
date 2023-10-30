#include "../sorting.h"

//o(n^2)
/*---------------------------Prova------------------------------*
* for(int i  = 0; i < tam; ++i) -> executa n vezes              *
* for(int j = i; j < tam; ++j) -> executa n - i vezes           *
*                                                               *
* n + (n-1) + (n-2) +... + 2 + 1 = n + n*(n - 1)/2 = n*(n + 1)/2*
*--------------------------------------------------------------*/
void selectionSort(int* a, int tam)
{
    int min;
    int pos;
    for(int i  = 0; i < tam; ++i)
    {
        min = INT_MAX;
        for(int j = i; j < tam; ++j)
        {
            if(a[j] < min)
            {
                min = a[j];
                pos = j;
            }
        }
        swapByPos(a,i,pos);
    }
}

void doulbleSelectionSort(int* a, int tam)
{
    int max;
    int min;
    int pos_min;
    int pos_max;
    int half_tam = tam / 2;
    for(int i  = 0; i < half_tam; ++i)
    {
        max = INT_MIN;
        min = INT_MAX;
        for(int j = i; j < tam - i; ++j)
        {
            if(a[j] < min)
            {
                min = a[j];
                pos_min = j;
            }

            else if(a[j] > max)
            {
                max = a[j];
                pos_max = j;
            }
        }
        swapByPos(a,i,pos_min);
        swapByPos(a,tam - i - 1,pos_max);
    }

}