#include <stdio.h>

// int main(){
//     int a = 10;
//     int *pi;
//     int **ppi;

//     pi = &a;
//     ppi = &pi;

//     printf("----------------------------------------------------------------\n");
//     printf("변수        변숫값           &연산         *연산         **연산\n");
//     printf("  a%15d%15u\n", a, &a);
//     printf(" pi%15u%15u%15d\n", pi, &pi, *pi);
//     printf("ppi%15u%15u%15u%15u\n", ppi, &ppi, *ppi, **ppi);
//     printf("-----------------------------------------\n");


//     return 0;
// }

// void swap_ptr(char **ppa, char **ppb);
// int main(){
//     char *pa = "success";
//     char *pb = "failure";
//     printf("pa -> %s, pb -> %s\n", pa, pb);
//     swap_ptr(&pa, &pb);
//     printf("pa -> %s, pb -> %s\n", pa, pb);

//     return 0;
// }
// void swap_ptr(char **ppa, char **ppb){
//     char *pt;
//     pt = *ppa;
//     *ppa = *ppb;
//     *ppb = pt;
// }