/* bsearch example */
#include <stdio.h>
#include <stdlib.h>
 
int cmp (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
 
int values[] = { 10, 20, 25, 40, 90, 100 };
 
int main ()
{
  int * pItem;
  int key = 40;
  pItem = (int*) bsearch (&key, values, 6, sizeof (int), cmp);
  if (pItem!=NULL)
    printf ("%d is in the array.\n",*pItem);
  else
    printf ("%d is not in the array.\n",key);
  return 0;
} //40 is in the array