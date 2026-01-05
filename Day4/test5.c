#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//---------------------------------------------------------------------------랜덤/난수
// int main(){
//     srand(time(NULL));                  //랜덤 초기화
//     int r1 = rand() % 10;
//     int r2 = rand() % 100 + 1;
//     int r3 = rand() % 21 - 10;
//     printf("0~9 랜덤: %d\n", r1);
//     printf("1~100 랜덤: %d\n", r2);
//     printf("-10~10 랜덤: %d\n", r3);
//     return 0;
// }

//------------------------------------------------------------------------------히스테리시스
// int main(){
//     int N,i;
//     int warning = 0;
//     printf("배터리 구간 수: ");
//     scanf("%d", &N);
//     int battery[N];
//     for(i=0; i<N; i++){
//         printf("%d번째 시점 배터리 잔량(0~100): ", i+1);
//         scanf("%d", &battery[i]);
//     }
//     for(i=0; i<N; i++){
//         if(warning==0 && battery[i]<=30) warning = 1;
//         else if(warning==1 && battery[i]>=35) warning =0;
//         printf("\n%d구간 잔량: %d, 경고상태: %s\n", i+1, battery[i], (warning==1) ? "ON":"OFF");
//     }
   
//     return 0;
// }
