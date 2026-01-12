#include <stdio.h>

// int main(){
//     FILE *fp;
//     fp = fopen("a.txt", "r");

//     if(fp == NULL){
//         printf("파일이 열리지 않았습니다.\n");
//         return 1;
//     }
//     printf("파일이 열렸습니다.\n");
//     fclose(fp);
    

//     return 0;
// }

// int main(){
//     FILE *fp;
//     int ch;
//     fp = fopen("a.txt", "r");
//     if(fp == NULL){
//         printf("파일이 열리지 않았습니다.\n");
//         return 1;
//     }
//     while (1){
//         ch = fgetc(fp);
//         if(ch == EOF) break;
//         putchar(ch);
//     }
//     fclose(fp);

//     return 0;
// }

// int main(){
//     FILE *fp;
//     char str[] = "apple";
//     int i;
//     char ch;

//     fp = fopen("c.txt", "a");
//     if(fp == NULL){
//         printf("파일을 만들지 못했습니다.\n");
//         return 1;
//     }
//     i = 0;
//     while(str[i] != '\0'){
//         fputc(str[i], fp);
//         i++;
//     }
//     fputc('\n', fp);
//     fclose(fp);
//     printf("파일이 만들어졌습니다.\n");
//     // fp = fopen("b.txt", "r");
//     // if(fp == NULL){
//     //     printf("파일을 열지 못했습니다.\n");
//     //     return 1;
//     // }
//     // while (1){
//     //     ch = fgetc(fp);
//     //     if(ch == EOF) break;
//     //     putchar(ch);
//     // }
//     // fclose(fp);


//     return 0;
// }

// int main(){
//     int ch;
//     while(1){
//         ch = getchar();
//         if(ch == EOF) break;
//         putchar(ch);
//     }
//     return 0;
// }

// int main(){
//     int ch;
//     while(1){
//         ch = fgetc(stdin);
//         if(ch == EOF) break;
//     }
//     fputc(ch, stdout);

//     return 0;
// }


// #include <string.h>
// int main(){
//     FILE *fp;
//     char str[20];
//     fp = fopen("a.txt", "a+");
//     if(fp == NULL){
//         printf("파일을 만들지 못했습니다.\n");
//         return 1;
//     }


//     return 0;
// }