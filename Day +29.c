//Bitwise AND
/* program to complete the bitwiseAnd function and
find the values of A and B */

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

void calculate_the_maximum(int n, int k) {
  //Write your code here.
int i,j;
int max=0;
int h=0;
for(i=1;i<n;i++)
{
  for(j=i+1;j<=n;j++)
   {  
     int v=i&j;
     if(v>=k)
        break;
     if(max<v)
        max=v;      
   }   
}
printf("%d\n",max);
}

int main()
{
    char* t_endptr;
    char* t_str = readline();
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char** nk = split_string(readline());

        char* n_endptr;
        char* n_str = nk[0];
        
    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char** nk = split_string(readline());

        char* n_endptr;
        char* n_str = nk[0];
        int n = strtol(n_str, &n_endptr, 10);

        if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

        char* k_endptr;
        char* k_str = nk[1];
        int k = strtol(k_str, &k_endptr, 10);
        calculate_the_maximum(n,k);
         if (k_endptr == k_str || *k_endptr != '\0') {
          exit(EXIT_FAILURE);
        }
    }
    return 0;
}
