/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float var=1943;
    unsigned char *puntero=(unsigned char *)&var;
    printf("0x%x\n",puntero[0]);
    printf("0x%x\n",puntero[1]);
    printf("0x%x\n",puntero[2]);
    printf("0x%x\n",puntero[3]);
    return 0;
}
