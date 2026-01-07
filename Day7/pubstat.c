#include <stdio.h>

// void assign(void);
// int main(){
//     int a = 0;
//     assign();
//     printf("main 함수 a : %d\n", a);
    
//     return 0;
// }
// void assign(void){
//     int a;
//     a = 10;
//     printf("assign 함수 a : %d\n", a);
// }

// int main(){
//     int a =10, b = 20;
//     printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
//     {
//         int temp;
//         temp = a;
//         a = b;
//         b = temp;
//     }
//     printf("교환 후 a와 b의 값 : %d, %d\n", a, b);
//     return 0;
// }

// void assign10();
// void assign20();

// int a;                                                         //전역변수는 알아서 0으로 초기화
// int main(){
//     printf("함수 호출 전 a 값: %d\n", a);
//     assign10();
//     assign20();
//     printf("함수 호출 후 a 값: %d\n", a);

//     return 0;
// }
// void assign10(){
//     a = 10;
// }
// void assign20(){
//     // int a;
//     a = 20;
// }

// void auto_func();
// void static_func();
// int main(){
//     int i;
//     printf("일반 지역 변수(auto)를 사용한 함수...\n");
//     for(i=0; i<3; i++){
//         auto_func();
//     }
//     printf("정적 지역 변수(static)를 사용한 함수...\n");
//     for(i=0; i<3; i++){
//         static_func();
//     }

//     return 0;
// }
// void auto_func(){
//     auto int a = 0;
//     a++;
//     printf("%d\n", a);
// }
// void static_func(){
//     static int a;                                  //static도 0으로 자동 초기화
//     a++;
//     printf("%d\n", a);
// }

// int main(){
//     register int i;
//     auto int sum = 0;
//     for(i=0; i<=1000000; i++){
//         sum+=i;
//     }
//     printf("%d\n", sum);

//     return 0;
// }

// int *sum(int a, int b);
// int main(){
//     int *resp;

//     resp  = sum(10, 20);
//     printf("두 정수의 합: %d\n", *resp);

//     return 0;
// }
// int *sum(int a, int b){
//     static int res;
//     res = a + b;
//     return &res;
// }

