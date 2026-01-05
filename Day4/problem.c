#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//---------------------------------------------------------------------------------문제1
// int main(){
//     int N, i;
//     printf("주행 로그 개수: ");
//     scanf("%d", &N);
//     int speed[N];
//     for(i=1; i<=N; i++){
//         printf("%d번째 주행로그[km/h]: ", i);
//         scanf("%d", &speed[i-1]);
//     }
//     printf("\n");
//     int delta;
//     int upcount = 0;
//     int downcount = 0;
//     for(i=1; i<N; i++){
//         delta = speed[i] - speed[i-1];
        
//         if(delta>=10){
//              upcount++;
             
//         }
//         else if(delta<=-10){
//              downcount++;
//         }
//     }
//     printf("급가속: %d회, 급감속: %d회\n", upcount, downcount);
//     return 0;
// }

//----------------------------------------------------------------------문제2
// int main(){
//     srand(time(NULL));
//     int i;
//     int speed[100];
//     for(i=0; i<100; i++){
//         speed[i] = rand() % 100 + 1;
//     }
//     for(i=0;i<100;i++){
//         printf("%d\n", speed[i]);
//     }
//     int delta;
//     int upcount = 0;
//     int downcount = 0;
//     for(i=1;i<100;i++){
//         delta = speed[i] - speed[i-1];
//         if(delta>=10) upcount++;
//         if(delta<=-10) downcount++;
//     }
//     printf("급가속: %d회, 급감속: %d회\n", upcount, downcount);
//     return 0;
// }

//---------------------------------------------------------------------------문제3 실패
// int main(){
//     int i, j, dir;
//     int speed[100];
//     int count = 0;
//     srand(time(NULL));

//     while(speed[0] == speed[1]){
//         speed[0] = rand() % 3000 + 1;
//         speed[1] = rand() % 3000 + 1;
//     }
//     dir = (speed[1]>speed[0]) ? 1 : -1;
//     count = 1;
//     for(i=2; i<100; i++){
//         int next;
//         while(1){
//             next = rand() % 3000 + 1;

//             if(next == speed[i=1]) continue;

//             if(count<10){
//                 if((dir==1&&next>speed[i-1])||(dir==-1&&next<speed[i-1])){
//                     count++;
//                     speed[i]=next;
//                     break;
//                 }
//                 else{
//                     if(dir==1&&next<speed[i-1]){
//                         dir=-1;
//                         count=0;
//                         speed[i] = next;

//                         break;
//                     }
//                     if(dir==-1&&next>speed[i-1]){
//                         dir = 1;
//                         count = 0;
//                         speed[i] = next;

//                         break;
//                     }
//                     if((dir==1&&next>speed[i-1])||(dir==-1&&next<speed[i-1])){
//                         speed[i] = next;
//                         break;
//                     }
//                 }
//             }

    
//         }
//         for(i=0; i<100; i++){
//             printf("speed[%d] = %d\n", i, speed[i]);
//             }
  
        
//     }


//     return 0;
// }
//---------------------------------------------------------------------------문제 3
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int speed[100];
//     int dir, count;

//     srand(time(NULL));

//     do {
//         speed[0] = rand() % 3000 + 1;
//         speed[1] = rand() % 3000 + 1;
//     } while (speed[0] == speed[1]);

//     dir = (speed[1] > speed[0]) ? 1 : -1;

//     for (int i = 2; i < 100; i++) {
//         int next;
//         int tries = 0;

//         while (1) {
//             next = rand() % 3000 + 1;
//             tries++;

//             if (next == speed[i - 1]) continue;

//             if (count > 0) {
//                 if ((dir == 1 && next > speed[i - 1]) ||
//                     (dir == -1 && next < speed[i - 1]))
//                     break;
//             }
//             else {
//                 if (dir == 1 && next < speed[i - 1]) {
//                     dir = -1;
//                     count = 0;
//                     break;
//                 }
//                 if (dir == -1 && next > speed[i - 1]) {
//                     dir = 1;
//                     count = 0;
//                     break;
//                 }
//                 if ((dir == 1 && next > speed[i - 1]) ||
//                     (dir == -1 && next < speed[i - 1]))
//                     break;
//             }

//             if (tries > 1000) {
//                 dir = -dir;
//                 count = 0;
//                 next = speed[i - 1];
//                 break;
//             }
//         }

//         if (count < 10) count++;
//         speed[i] = next;
//     }

//     for (int i = 0; i < 100; i++)
//         printf("speed[%d] = %d\n ", i, speed[i]);

//     return 0;
// }
//----------------------------------------------------------------------문제 4
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int speed[100];
//     int dir;
//     int count = 0;

//     srand(time(NULL));

//     do {
//         speed[0] = rand() % 3000 + 1;
//         speed[1] = rand() % 3000 + 1;
//     } while (
//         speed[0] == speed[1] ||
//         abs(speed[1] - speed[0]) > 20
//     );

   
//     dir = (speed[1] > speed[0]) ? 1 : -1;
 

//     for (int i = 2; i < 100; i++) {
//         int next;

//         while (1) {
//             next = rand() % 3000 + 1;

//             int diff = abs(next - speed[i - 1]);

//             if (next == speed[i - 1] || diff > 20)
//                 continue;

//             if (count < 10) {
//                 if ((dir == 1 && next > speed[i - 1]) ||
//                     (dir == -1 && next < speed[i - 1])) {
//                     break;
//                 }
//             }
//             else {
//                 if (dir == 1 && next < speed[i - 1]) {
//                     dir = -1;
//                     count = 0;
//                     break;
//                 }
//                 if (dir == -1 && next > speed[i - 1]) {
//                     dir = 1;
//                     count = 0;
//                     break;
//                 }
//                 if ((dir == 1 && next > speed[i - 1]) ||
//                     (dir == -1 && next < speed[i - 1])) {
//                     break;
//                 }
//             }
//         }
//         if (count < 10) count++;
//         speed[i] = next;
//     }
//     for (int i = 0; i < 100; i++)
//         printf("speed[%d] = %d\n", i, speed[i]);

//     return 0;
// }
//------------------------------------------------------------------문제 5
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>


// int main(void) {
//     int speed[100];
//     int dir;
//     int i, j;
//     int num = 0;
//     int try;

//     srand(time(NULL));

//     do {
//         speed[0] = rand() % 3000;
//         if (speed[0] == 0) {
//             printf("0 발견. 종료\n");
//             return 0;
//         }

//         speed[1] = rand() % 3000;
//         if (speed[1] == 0) {
//             printf("0 발견. 종료\n");
//             return 0;
//         }

//     } while (speed[0] == speed[1]);

//     dir = (speed[1] > speed[0]) ? 1 : 0;

//     i = 2;
//     num = 2;

//     while (i < 100) {
//         try = 0;

//         while (try++ < 1000) {
//             int next = rand() % 3000;

//             if (next == 0) {
//                 printf("0 발견. 출력값:\n");
//                 for (j= 0; j < i; j++)
//                     printf("speed[%d] = %d \n", j, speed[j]);
//                 return 0;
//             }

//             if (num < 10) {
//                 if ((dir && next > speed[i - 1]) ||
//                     (!dir && next < speed[i - 1])) {
//                     speed[i++] = next;
//                     num++;
//                     break;
//                 }
//             }
//             else {
//                 if ((dir && next < speed[i - 1]) ||
//                     (!dir && next > speed[i - 1])) {
//                     dir = !dir;
//                     num = 1;
//                     speed[i++] = next;
//                     break;
//                 } else {
//                     speed[i++] = next;
//                     break;
//                 }
//             }
//         }

//         if (try >= 1000) {
//             printf("랜덤 생성 실패 (무한루프 방지)\n");
//             break;
//         }
//     }

//     printf("출력값:\n");
//     for (j = 0; j < i; j++)
//         printf("speed[%d] = %d\n ", j, speed[j]);

//     return 0;
// }



