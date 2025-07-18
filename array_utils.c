#include<stdio.h>
#include<stdlib.h>
#include<array_utils.h>

// place your function definitions here
enum errorcode
{
    true,
    false
};
int contains(const int *arr, int size, int x)
{
    for (int i = 0; i < size; i++, arr++)
    {
        if (*arr == x)
        {
            return true;
        }
    }
    return false;
}
int containsWithin(const int *arr, int size, int x, int i, int j)
{
    for (; arr[i] <= arr[j]; i++)
    {

        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}
int * paddedCopy(const int *arr, int oldSize, int newSize){
    int *newArr = (int *)malloc(newSize * sizeof(int));
    if (newArr == NULL) {
        return NULL;
    }
    int i;
    for (i = 0; i < oldSize && i < newSize; ++i) {
        newArr[i] = arr[i];
    }
    for (; i < newSize; ++i) {
        newArr[i] = 0;
    }

    return newArr;
}
void reverse(int *arr, int size){
    int a=0;
    int b =a-1;
    while (a<b)
    {
        int c = arr[a];
        arr[a]=arr[b];
        arr[b]=c;
        a++;
        b--;
    }
    
}
int * reverseCopy(const int *arr, int size){
    int *reversedArr = (int *)malloc(size * sizeof(int));
     if (reversedArr == NULL) {
        return NULL;
    }
        for (int i = 0; i < size; ++i) {
        reversedArr[i] = arr[size - 1 - i];
    }

    return reversedArr;
}