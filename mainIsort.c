#include <stdio.h>
#include"isort.h"
#define LEN 50
int main ()
{
    int arr[LEN]={0}; 
 //printf ("eneter  numbers");
 for (int i=0;  i<LEN;i++) {
     scanf("%d",&arr[i]);
 }   
        printf ("\n");

    insertion_sort(arr,LEN);

for (int i=0; i<LEN;i++)
    {
    printf ("%d,",*(arr+i));
    }

        return 0;

}