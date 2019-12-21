#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#define LINE 256
#define WORD 30


int Getline(char s[]){
    int i = 0;
    char  c ;
    scanf("%c" , &c);
    while (c != '\n'&&c != '\0'&& i < LINE )
    {
        s[i] = c;
        i++;
        scanf("%c" , &c);
    }
    s[i] = '\0';
    return i;
}
int Getword(char w[]){
    int i = 0;
    char  c ;
    scanf("%c" , &c);
    while ( (c != '\n') && (c != '\0') && (i < WORD) && (c !='\t') && (c !=' ')   ){
        w[i] = c;
        i++;
        scanf("%c" , &c);
    }
    w[i] = '\0';
    return i;
 }

int subs(char * strr1, char * strr2)
{
 int b=1;
 int len11=strlen(strr1);
 int len22=strlen(strr2);
 for(int i=0;i<len22;i++)
 {
  if (strr1[i]!=strr2[i]) b=0;
 }
 return b;
}

int substring( char * str1, char * str2) 
{
 
 int len1=strlen(str1);
 int len2=strlen(str2);
 if(len2>len1)return 0;
 int boo = 1;
 
  for(int j=0;j<len1;j++) 
 {
  if ( subs (str1+j,str2) ==1 )  return 1;
  
  }
    return 0;
 
}
 
 


int similar (char *s, char *t, int n) 
{
int len1=strlen(s);
int len2=strlen(t);
if(len2+n!=len1)return 0;

int counter =0;
char *ps= s;
char *pt= t;
while(*ps!='\0')
{
if(*ps==*pt)
 {
  ps++;
  pt++;
 }
 else 
  {
   ps++;
   counter++;
  }
 
  }
  //printf("count :%d\n",counter);
  if (counter==n)return 1;
   return 0;
}

void print_lines(char * str) 
{
 char line[LINE] ; 
 
  for (int i =0;i<250;i++) {
 int x=  Getline(line);
  if(  substring(line,str)  ) printf("%s\n",line);
 }
}
 void print_similar_words(char * str) 
 {
 char word[WORD] ; 
  for (int i =0;i<250*LINE;i++) {
 int x= Getword(word);
  if(similar(word,str,0))  printf("%s\n",word);
  if(similar(word,str,1))printf("%s\n",word);
   
  }
} 



 
 





