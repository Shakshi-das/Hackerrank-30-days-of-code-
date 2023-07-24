//program of recursion
//program to find factorial of the number

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

int factorial(int n) {
if(n<=0)
    return 1;
else
    return n*factorial(n-1);

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    int result = factorial(n);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}
