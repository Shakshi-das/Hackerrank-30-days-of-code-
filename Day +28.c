//RegEx, Patterns, and Intro to Databases
/*program to print an alphabetically-ordered list of people 
whose email address ends in @gmail .com */

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

int main(){
    int N,i,j; 
    scanf("%d",&N);
    char *ptr,*str,*ptr1;
    char tmp[20],tmp1[30];
    char firstName[N][20];
    char emailID[N][30],*emid;
    for(i= 0; i < N; i++)
    {
        scanf("%s %s",firstName[i],emailID[i]);
    }
    for(i=1;i<N;i++)
    {
        for(j=1;j<N;j++)
        {
          if(strcmp(firstName[j-1],firstName[j])>0)
            {
                strcpy(tmp,firstName[j-1]);
                strcpy(firstName[j-1],firstName[j]);
                strcpy(firstName[j],tmp);
                strcpy(tmp1,emailID[j-1]);
                strcpy(emailID[j-1],emailID[j]);
                strcpy(emailID[j],tmp1);
            }    
        }
    }
    for(j=0;j<N;j++)
   {
      //strcat(str,"gmail");
         ptr=strstr(emailID[j],"@");
         ptr1=strstr(emailID[j],"g");
         if(strcmp(ptr,"@gmail.com")==0 && strncmp(ptr1,"gamil@gmail",8)!=0 )
            printf("%s\n",firstName[j]);
         else
           {} 
    }
    return 0;
}
