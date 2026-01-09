#include <stdio.h>

// typedef struct{
//     int num;
//     char name[20];
//     int kor, eng, math, total;
//     double avg;
//     char grade;
// }st;
// void print_list(st *p);
// void avg_up(st *pa);
// void avg_down(st *pb);
// int main(){
//     st s[5];
//     for(int i=0; i<5; i++){
//         printf("학번: ");
//         scanf("%d", &s[i].num);
//         printf("이름: ");
//         scanf("%s", s[i].name);
//         printf("국어 영어 수학 점수[0~100]: ");
//         scanf("%d%d%d", &s[i].kor, &s[i].eng, &s[i].math);
//         s[i].total = s[i].kor + s[i].eng + s[i].math;
//         s[i].avg = s[i].total / 3.0;
//         if(s[i].avg >= 90) s[i].grade = 'A';
//         else if(s[i].avg >= 80) s[i].grade = 'B';
//         else if(s[i].avg >= 70) s[i].grade = 'C';
//         else s[i].grade = 'F';
//     }
//     print_list(s);
//     avg_up(s);
//     avg_down(s);

//     return 0;
// }
// void print_list(st *p){
//     printf("# 정렬 전 데이터...\n");
//     for(int i=0; i<5; i++){
//         printf("%5d%6s%4d%4d%4d%5d%8.2lf%4c\n",p[i].num, p[i].name, p[i].kor, p[i].eng, p[i].math, p[i].total, p[i].avg, p[i].grade);
//         printf("\n");
//     }

// }

// void avg_up(st *pa){
//     st tmp;
//     for(int i=0; i<4; i++){
//         for(int j=0; j<4-i; j++){
//             if(pa[j].avg<pa[j+1].avg){
//                 tmp = pa[j];
//                 pa[j] = pa[j+1];
//                 pa[j+1] = tmp;
//             }
//         }
//     }
//     printf("# 정렬 후 데이터1...\n");
//     for(int i=0; i<5; i++){
//         printf("%5d%6s%4d%4d%4d%5d%8.2lf%4c\n",pa[i].num, pa[i].name, pa[i].kor, pa[i].eng, pa[i].math, pa[i].total, pa[i].avg, pa[i].grade);
//     }
// }
// void avg_down(st *pb){
//     st tmp;
//     for(int i=0; i<4; i++){
//         for(int j=0; j<4-i; j++){
//             if(pb[j].avg>pb[j+1].avg){
//                 tmp = pb[j];
//                 pb[j] = pb[j+1];
//                 pb[j+1] = tmp;
//             }
//         }
//     }
//     printf("# 정렬 후 데이터2...\n");
//     for(int i=0; i<5; i++){
//         printf("%5d%6s%4d%4d%4d%5d%8.2lf%4c\n",pb[i].num, pb[i].name, pb[i].kor, pb[i].eng, pb[i].math, pb[i].total, pb[i].avg, pb[i].grade);
//     }
// }
