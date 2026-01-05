#include <stdio.h>
// #include <math.h>


//-----------------------------------------------------------------------함수
// int sum(int x, int y);

// int main(void){
//     int a=10, b=20 ;
//     int result;

//     result = sum(a, b);
//     printf("result : %d\n", result);
//     return 0;
// }
// int sum(int x, int y){
//     int temp;
//     temp = x + y;
//     return temp;
// }


// int avg(int x, int y);
// int main(void){
//     int a, b;
//     printf("두 수를 입력하세요: ");
//     scanf("%d, %d", &a, &b);
//     // printf("b를 입력하세요: ");
//     // scanf("%d", &b);
//     int result;
//     result = avg(a,b);
//     printf("두 수의 평균: %d\n", result);
//     return 0;
// }
// int avg(int x, int y){
//     int z=(x+y)/2;
//     return z;
// }


// double todeg(double x);
// double torad(double y);
// int main(void){
//     double a,b;
//     double res1, res2;
//     printf("radian 값을 입력하세요: ");
//     scanf("%lf", &a);
//     printf("degree 값을 입력하세요: ");
//     scanf("%lf", &b);

//     res1 = todeg(a);
//     res2 = torad(b);
//     printf("변환값1: %.2f\n", res1);
//     printf("변환값2: %.2f\n", res2);

//     return 0;    
// }
// double todeg(double x){
//     double deg = x * 180 / M_PI;
//     return deg;
// }
// double torad(double y){
//     double rad = y * M_PI / 180;
//     return rad;
// }


// int sum();
// int main(){
//     int result;

//     result=sum();
//     printf("반환값: %d\n", result);

//     return 0;
// }
// int sum(){
//     int a;
//     printf("양수 입력: ");
//     scanf("%d", &a);
//     return a;
// }

// void print_char(char ch, int x);
// int main(){
//     print_char('@',5);

//     return 0;
// }
// void print_char(char ch, int x){
//     int i;
//     for(i=0; i<x; i++){
//         printf("%c",ch);
//     }
//     printf("\n");
//     return;
// }

// void print_line();
// int main(){
//     print_line();
//     printf("학번    이름    전공    학점\n");
//     print_line();
//     return 0;
// }
// void print_line(){
//     int i;
//     for(i=0; i<30; i++){
//         printf("-");
//     }
//     printf("\n");
// }

// void fruit(int count);
// int main(){
//     fruit(1);
//     return 0;
// }
// void fruit(int count){

//     printf("apple\n");
//     if(count==3) return;
//     fruit(count+1);
//     printf("jam\n");
// }

//----------------------------------------------------------------배열

// int main(){
//     int ary[5];
//     ary[0] = 10;
//     ary[1] = 20;
//     ary[2] = ary[0] + ary[1];
//     scanf("%d", &ary[3]);

//     printf("%d\n", ary[2]);
//     printf("%d\n", ary[3]);
//     printf("%d\n", ary[4]);

//     return 0;    
// }

// int main(){
//     int score[5];
//     int i;
//     int total = 0;
//     double avg;
//     for(i=0; i<5; i++){
//         scanf("%d", &score[i]);
//     }
//     for(i=0; i<5; i++){
//         total+=score[i];
//     }
//     avg = total / 5;
//     for(i=0; i<5; i++){
//         printf("%7d", score[i]);
//     }
//     printf("\n");

//     printf("평균: %.2f\n", avg);
// }

// int main(){
//     int score[5];
//     int i;
//     int total = 0;
//     int count;
//     double avg;
//     count = sizeof(score) / sizeof(score[0]);
//     for(i=0;i<count;i++){
//         printf("%d번째 점수를 입력하세요: ", i+1);
//         scanf("%d", &score[i]);
//     }
//     for(i=0; i<count; i++){
//         total+=score[i];
//     }
//     avg = total / (double)count;
//     for(i=0; i<count; i++){
//         printf("%3d", score[i]);
//     }
//     printf("\n");
//     printf("평균: %.2f\n", avg);


//     return 0;
// }

// int main(){
//     char str[80] = "applejam";
//     printf("최초 문자열: %s\n", str);
//     printf("새로운 문자열 입력: ");
//     scanf("%s", str);
//     printf("입력 후 문자열: %s\n", str);
//     printf("%c\n", str[7]);

//     return 0;
// }


// #include <string.h>
// int main(){
//     char str1[80] = "cat";
//     char str2[80];
//     strcpy(str1, "tiger");
//     strcpy(str2, str1);
//     printf("%s, %s\n", str1, str2);
//     return 0;
// }


// int main(){
//     char str[80];
//     printf("문자열 입력: ");
//     gets(str);
//     // fgets(str,sizeof(str),stdin);
//     // scanf("%s", str);
//     puts("입력된 문자열: ");
//     puts(str);
//     return 0;
// }

// int main(){
//     char str[5];
//     str[0] = 'O';
//     str[1] = 'K';
//     printf("%s\n", str);
//     return 0;
// }