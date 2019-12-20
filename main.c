#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#define LINE 256
#define WORD 30
#include "txtfind.h"

int main()
{
    char str [LINE];
    char AorB ;
    int x= Getword(str);
    int y= Getword(AorB);
    if(AorB=='a') print_lines(str);
    if (AorB=='b')print_similar_words(str);
    return 0;
}
