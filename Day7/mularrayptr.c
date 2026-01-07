#include <stdio.h>

// int main(){
//     int score[3][4];
//     int total;
//     double avg;

//     for(int i=0; i<3; i++){
//         printf("4과목의 점수 입력 : ");
//         for(int j=0; j<4; j++){
//             scanf("%d", &score[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=0; i<3; i++){
//         total = 0;
//         for(int j=0; j<4; j++){
//             total+=score[i][j];
//         }
//         avg = total / 4.0;
//         printf("총점: %d, 평균: %.2lf\n", total, avg);
//     }
//     printf("\n");
//     return 0;
// }

// int main(){
//     int num[3][4] = {
//         {1, 2, 3, 4}, 
//         {5, 6, 7, 8}, 
//         {9, 10, 11, 12}
//     };
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             printf("%5d", num[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(){
//     char animal[5][20];
//     int i, count;
//     count = sizeof(animal) / sizeof(animal[0]);
//     for(i=0; i<count; i++){
//         scanf("%s", animal[i]);
//     }
//     for(i=0; i<count; i++){
//         printf("%s ", animal[i]);
//     }
//     printf("\n");

//     return 0;
// }

// int main(){
//     int score[2][3][4] = {
//         {{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
//         {{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
//     };
//     for(int i=0; i<2; i++){
//         printf("%d반 점수...\n", i+1);
//         for(int j=0; j<3; j++){
//             for(int k=0; k<4; k++){
//                 printf("%4d", score[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     char *pary[5];
//     int i;
//     pary[0] = "dog";
//     pary[1] = "elephant";
//     pary[2] = "horse";
//     pary[3] = "tiger";
//     pary[4] = "lion";

//     for(i=0; i<5; i++){
//         printf("%s\n", pary[i]);
//     }

//     return 0;
// }

// int main(){
//     int ary1[4] = {01, 02, 03, 04};
//     int ary2[4] = {11, 12, 13, 14};
//     int ary3[4] = {21, 22, 23, 24};
//     int *pary[3] = {ary1, ary2, ary3};
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             printf("%5d", *(pary[i] +j));
//         }
//         printf("\n");
//     }

//     return 0;
// }



// int main(){
//     int num[5][6] = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10},
//         {11, 12, 13, 14, 15},
//         {16, 17, 18, 19, 20}
//     };
//     int i, j;
//     int sum = 0; 
//     int total=0;
//     for(i=0; i<4; i++){
//         sum = 0;
//         for(j=0; j<5; j++){
//             sum+=num[i][j];
//         }
//         num[i][5] = sum;
//     }
//     for(j=0; j<5; j++){
//         sum = 0;
//         for(i=0; i<4; i++){
//             sum+=num[i][j];
//         }
//         num[4][j] = sum;
//     }
//     for(i=0; i<4; i++){
//         num[4][5]+=num[i][5];
//     }

    
//     for(i=0; i<5; i++){
//         for(j=0; j<6; j++){
//         printf("%5d", num[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }