// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int count_black(int label[], int N);
// double index_avg(int label[], int N);
// void labels(int value[], int N, int thres);
// int main(){
//     int N;
//     printf("센서 개수 : ");
//     scanf("%d",&N);
//     int value[N];
//     int label[N];
//     int thres;
//     printf("임계값 입력[0~1023]: ");
//     scanf("%d", &thres);
//     for(int i=0; i<N; i++){
//         printf("센서로부터 입력된 값: ");
//         scanf("%d", &value[i]);
//     }
//     for(int i =0; i<N; i++){
//         if(value[i]>=thres){
//             label[i] = 0;
//         }
//         else if(value[i]<thres){
//             label[i] = 1;
//         }
//     }
//     printf("label = ");
//     for(int i=0; i<N; i++){
//         printf("%3d", label[i]);
//     }

//     printf("\n");
//     int black_count = count_black(label, N); 
//     printf("black_count = %d\n", black_count);
//     double avg = index_avg(label, N);
//     printf("index_avg = %.2f\n", avg);



//     return 0;
// }

// int count_black(int label[], int N){
//     int sum=0;
//     for(int i=0; i<N; i++){
//         sum+=label[i]; 
//     }
//     return sum;
// }
// double index_avg(int label[], int N){
//     int sum = 0;
//     int num = 0;
//     double avg;
//     for(int i=0; i<N; i++){
//         sum+=(i*label[i]);
//         num+=label[i];
//         avg = sum / num;
//     }
//     if(num==0) return -1.0;
//     return avg;
// }
