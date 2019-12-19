//#include "isort.h"
#include <stdio.h>
#define LEN 50
void shift_element (int* arr, int i) {
for (int j=i;j>0;j--) {
*(arr+j+1)=*(arr+j);    
}
}
void insertion_sort(int* arr , int len) {
   for(int j =1;j<len;j++){
    int key = *(arr+j);
    int i=j-1;
    int counter=0;
    while(i>=0 && *(arr+i)>key){
    i--;
    counter ++;    
    }
    int* p=arr+i;
    shift_element (p,counter);
   *(arr+i+1)=key;
       
   }
}





