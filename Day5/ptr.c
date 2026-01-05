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

// int main(){
//     char ch;
//     int in;
//     double db;
//     char *pc = &ch;
//     int *pi = &in;
//     double *pd = &db;

//     printf("char형 변수의 주소 크기: %d\n", sizeof(&ch));
//     printf("int형 변수의 주소 크기: %d\n", sizeof(&in));
//     printf("double형 변수의 주소 크기: %d\n", sizeof(&db));

//     printf("char * 포인터의 크기: %d\n", sizeof(pc));
//     printf("int * 포인터의 크기: %d\n", sizeof(pi));
//     printf("double * 포인터의 크기: %d\n", sizeof(pd));

//     printf("char형 * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pc));
//     printf("int형 * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pi));
//     printf("double형 * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pd));

//     return 0;
// }

// int main(){
//     int a = 10;
//     int *p = &a;
//     double *pd;
//     pd = (double *)p;
//     printf("%lf\n", *pd);

//     return 0;
// }

// int main(){
//     int a = 10;
//     int *p = &a;
//     double *pd;
//     pd = p;
//     printf("%d\n", *(int *)pd);

//     return 0;
// }

// int main(){
    


//     return 0;
// }

// void swap(int *pa, int *pb);
// int main(){
//     int a =10, b =20;

//     swap(&a,&b);
//     printf("a: %d, b: %d\n", a, b);


//     return 0;
// }

// void swap(int *pa, int *pb){
//     int temp;

//     temp = *pa;
//     *pa = *pb;
//     *pb = temp;
// }

// void swap(int x, int y);
// int main(){
//     int a = 10, b = 20;
//     swap(a, b);
//     return 0;
// }
// void swap(int x, int y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
//     printf("a: %d, b: %d\n", x, y);
// }