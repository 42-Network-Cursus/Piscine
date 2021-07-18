#include <stdio.h>
int swap_needed(char arr[], int start, int curr)
{
    for (int i = start; i < curr; i++)
    {
        if (arr[i] == arr[curr])
            return 0;
    }
    return 1;
}
void swap(char*a , char* b)
{
    char tmp = *a;
    *a=*b;
    *b=tmp;
}
void next_permutation(char arr[], int index, int count, int *compteur)
{
    if (index >= count)
    {
        (*compteur)++;
        return;
    }
    for (int i = index; i < count; i++)
    {
        int swap_ok = swap_needed(arr, index, i);
        if (swap_ok)
        {
            swap(&arr[index], &arr[i]);
            next_permutation(arr, index + 1, count, compteur);
            swap(&arr[index], &arr[i]);
        }
    }
}
int main()
{
    int valeur=0;
    int *compteur;
    compteur=&valeur;
    char str[] = "1111444422223333\0";
    next_permutation(str, 0, 16, compteur);
    printf("%d", valeur);
}
