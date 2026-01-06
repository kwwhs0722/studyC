#include <stdio.h>

// void print_ary(int *pa);
// int main(){
//     int ary[5] = {10, 20, 30, 40, 50};
//     print_ary(ary);
//     return 0;
// }
// void print_ary(int *pa){
//     for(int i=0; i<5; i++){
//         printf("%4d", *pa);
//         *pa++;
//     }
//     printf("\n");
// }

// void print_ary(int *pa, int N);
// int main(){
//     int ary1[5] = {10, 20, 30, 40, 50};
//     int ary2[7] = {10, 20, 30, 40, 50, 60, 70};
//     print_ary(ary1, 5);
//     printf("\n");
//     print_ary(ary2, 7);
//     printf("\n");

//     return 0;
// }
// void print_ary(int *pa, int N){
//     for(int i=0; i<N; i++){
//         printf("%4d", pa[i]);
//     }
// }

// void input_ary(double *pa, int size);
// double find_max(double *pa, int size);
// int main(){
//     double ary[5];
//     double max;
//     int size = sizeof(ary) / sizeof(ary[0]);
//     input_ary(ary, size);
//     max = find_max(ary, size);
//     printf("배열의 최대값: %.2f\n", max);
//     return 0;
// }
// void input_ary(double *pa, int size){
//     printf("배열 입력\n");
//     for(int i=0; i<size; i++){
//         printf("[%d] = ", i);
//         scanf("%lf", pa + i);
//     }
// }
// double find_max(double *pa, int size){
//     double max;
//     max = pa[0];
//     for(int i=1; i<size; i++){
//         if(pa[i]>max) max = pa[i];
//     }
//     return max;
// }

void print_month(int *mp);
int main(){
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    print_month(month);


    return 0;
}
void print_month(int *mp){
    int i;
    for(i=0; i<12; i++){
        printf("%5d", mp[i]);
        if((i % 5) == 4) printf("\n");
    }
    printf("\n");
}