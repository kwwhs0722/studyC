#include <stdio.h>
#include <stdlib.h>

// int main(){
//     int *pi;
//     double *pd;

//     pi = (int *)malloc(sizeof(int));
//     if(pi == NULL){
//         printf("# 메모리가 부족합니다.\n");
//         exit(1);
//     }
//     pd = (double *)malloc(sizeof(double));
//     *pi = 10;
//     *pd = 3.4;
//     printf("정수형으로 사용 : %d\n", *pi);
//     printf("실수형으로 사용 : %.1lf\n", *pd);

//     free(pi);
//     free(pd);
    
//     return 0;
// }

// int main(){
//     int *pi;
//     int i, sum=0;
//     pi = (int *)malloc(5*sizeof(int));
//     if(pi == NULL){
//         printf("# 메모리가 부족합니다.\n");
//         exit(1);
//     }
//     printf("다섯 명의 나이 입력 : ");
//     for(i=0; i<5; i++){
//         scanf("%d", pi+i);
//         sum+=*(pi+i);
//     }
//     printf("%d\n", sum);
//     printf("다섯 명의 평균 나이 : %.2f\n", (sum/5.0));

//     return 0;
// }

// int main(){
//     int *pi;
//     int size = 5;
//     int count = 0;
//     int num;
//     int i;
//     pi = (int *)calloc(size, sizeof(int));
//     while(1){
//         printf("양수만 입력하세요 => ");
//         scanf("%d", &num);
//         if(num<=0) break;
//         if(count == size){
//             size+=5;
//             pi = (int *)realloc(pi, size * sizeof(int));
//         }
//         pi[count++] = num;
//     }
//     for(i=0; i<count; i++){
//         printf("%5d", *(pi+i));
//     }
//     printf("\n");

//     free(pi);

//     return 0;
// }

// #include <string.h>

// int main(){
//     char temp[80];
//     char *str[3];
//     int i;
//     for(i -0;i<3; i++){
//         fgets(temp, 80, stdin);
//         temp[strlen(temp)-1] = '\0';
//         str[i] = (char *)malloc(strlen(temp)+1);
//         strcpy(str[i], temp);
//     }
//     for(i=0; i<3; i++){
//         printf("%s\n", str[i]);
//     }
//     for(i=0; i<3; i++){
//         free(str[i]);
//     }
//     return 9;
// }

// void print_str(char **ps);
// int main(){
//     char temp[80];
//     char *str[21] = {0};
//     int i =0;
//     while(i<20){
//         printf("문자열 입력 : ");
//         fgets(temp, 80, stdin);
//         temp[strlen(temp)-1]='\0';
//         if(strcmp(temp, "end")==0) break;
//         str[i] = (char *)malloc(strlen(temp)+1);
//         strcpy(str[i], temp);
//         i++;
//     }
//     print_str(str);
//     for(i=0; str[i] != NULL; i++){
//         free(str[i]);
//     }
//     return 0;

// }
// void print_str(char **ps){
//     while(*ps!=NULL){
//         printf("%s\n", *ps);
//         ps++;
//     }
// }

