void copyArray(int* src, int* dest, int ini, int size)
{
    for(int i = 0; i < size; ++i)
    {
        dest[i] = src[ini+i];
    }
}