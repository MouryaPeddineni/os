What is the output of the following C code:

#include<stdio.h>

int main()

{

int a[2][2] = {1, 2, 3, 4};

printf("%u, %u\n", *(a[0]+1), *(*(a+0)+1)); return 0;}