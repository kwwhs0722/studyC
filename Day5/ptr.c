#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//------------------------------------------------------------------------------------포인터
// int main(){
//     int a;
//     double b;
//     char c;
//     printf("int형 변수의 주소: %u\n", &a);
//     printf("double형 변수의 주소: %u\n", &b);
//     printf("char형 변수의 주소: %u\n", &c);

//     return 0;
// }

// int main(){
//     int a;
//     int *pa;

//     pa = &a;
//     printf("a값 입력: ");
//     scanf("%d", pa);
//     printf("포인터로 a값 출력 : %d\n", *pa);
//     printf("변수명으로 a값 출력 : %d\n", a);

//     return 0;
// }

// int main(){
//     int a=10, b=16, total;
//     double avg;
//     int *pa, *pb;
//     int *pt = &total;
//     double *pg = &avg;

//     pa = &a;
//     pb = &b;
//     *pt = *pa + *pb;
//     *pg = *pt / 2;

//     printf("두 정수의 값 : %d, %d\n", *pa, *pb);
//     printf("두 정수의 합 : %d\n", *pt);
//     printf("두 정수의 평균 : %.2f\n", *pg);

//     return 0;
// }

// int main(){
//     int a = 10, b = 20;
//     const int *pa = &a;
//     printf("변수 a의 값: %d\n", *pa);
//     pa = &b;
//     printf("변수 b의 값: %d\n", *pa);
//     pa = &a;
//     a = 30;
//     printf("변수 a의 값: %d\n", *pa);

//     return 0;
// }