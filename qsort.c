#include <stdlib.h>
#include <stdio.h>
int cmp(const void* a,const void* b)
{
    return (*(int*)a-*(int*)b);  //92.2 is forced to int
    //return (*(int*)b-*(int*)a);降序
}
int main()
{
    int i = 0;
    int a[10] = {1, 7, 54, 92.2, 3, 1, 64, 28, 9};//include a (double)92.2 
    qsort(a, 6, sizeof(int),cmp);
    for (i = 0; i < 6; i++)
        printf("%d ", a[i]);
    return 0;
}