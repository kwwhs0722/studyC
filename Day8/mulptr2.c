#include <stdio.h>

// int main(){
//     int ary[5];
//     printf(" ary의 값 : %u\t", ary);
//     printf("ary의 주소 : %u\n", &ary);
//     printf(" ary + 1 : %u\t", ary + 1);
//     printf(" &ary + 1 : %u\n", &ary+1);

//     return 0;
// }

// int sum(int, int);
// int main(){
//     int (*fp)(int, int);
//     int res;
//     fp = sum;
//     res = fp(10, 20);
//     printf("result: %d\n", res);

//     return 0;
// }

// int sum(int a, int b){
//     return a+b;
// }

// void func(int (*fp)(int, int));
// int sum(int a, int b);
// int mul(int a, int b);
// int max(int a, int b);
// int main(){
//     int sel;
//     printf("01 합\n");
//     printf("02 곱\n");
//     printf("03 큰 값\n");
//     printf("원하는 연산 선택 : ");
//     scanf("%d", &sel);
//     switch(sel){
//         case 1: func(sum); break;
//         case 2: func(mul); break;
//         case 3: func(max); break;
//     }

//     return 0;
// }
// void func(int (*fp)(int, int)){
//     int a, b;
//     int res;
//     printf("두 정수의 값 : ");
//     scanf("%d %d", &a, &b);
//     res = fp(a, b);
//     printf("결과 : %d\n", res);
// }
// int sum(int a, int b){
//     return a+b;
// }
// int mul(int a, int b){
//     return a*b;
// }
// int max(int a, int b){
//     if(a>b) return a;
//     else return b;
// }

// int main(){
//     int a = 10;
//     double b = 3.4;
//     void *vp;
//     vp = &a;
//     printf("a : %d\n", *(int *)vp);
//     vp = &b;
//     printf("b : %.1f\n", *(double *)vp);

//     return 0;
// }