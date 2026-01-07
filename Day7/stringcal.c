#include <stdio.h>
#include <string.h>

// int main(){
//     char str1[80] = "strawberry";
//     char str2[80] = "apple";
//     char *ps1 = "banana";
//     char *ps2 = str2;

//     printf("최초 문자열: %s\n", str1);
//     // puts(str1);
//     strcpy(str1, str2);
//     printf("바뀐 문자열: %s\n", str1);


//     return 0;
// }

// int main(){
//     char str[20] = "mango tree";
//     strncpy(str, "apple-pie", 5);
//     printf("%s\n", str);
//     return 0;
// }

// int main(){
//     char str[80] = "straw";
//     strcat(str, "berry");
//     printf("%s\n", str);
//     strncat(str, "piece", 3);
//     printf("%s\n", str);

//     return 0;    
// }

// int main(){
//     char str1[80], str2[80];
//     char *resp;

//     printf("2개의 과일 이름 입력: ");
//     scanf("%s%s", str1, str2);
//     if(strlen(str1)>strlen(str2)){
//         resp = str1;
//     }
//     else if(strlen(str1)<strlen(str2)){
//         resp = str2;
//     }
//     else{
//         printf("이름의 길이가 같다.\n");
//         return 0;
//     }

//     printf("이름이 긴 과일은 : %s\n", resp);

//     return 0;
// }


// int main(){
//     char str1[80] = "pear";
//     char str2[80] = "peach";
//     printf("사전에 나중에 나오는 과일 이름: ");
//     if(strcmp(str1, str2)>0){
//         printf("%s\n", str1);
//     }
//     else if(strcmp(str1, str2)<0){
//         printf("%s\n", str2);
//     }
//     else if(strcmp(str1, str2)==0){
//         printf("같은 문자열\n");
//     }

//     return 0;
// }

//strcp , strncpy , strlen , strcat , strncat함수 만들기
//-----------------------------------------------------------------------strcpy
// void sc(char *pstr1, char *pstr2);
// int main(){
//     char str1[80] = "strawberry";
//     char str2[80] = "apple";
//     char *ps1 = "banana";
//     char *ps2 = str2;

//     printf("최초 문자열: %s\n", str1);
//     // puts(str1);
//     // strcpy(str1, str2);
//     sc(str1, str2);
//     printf("바뀐 문자열: %s\n", str1);
//     sc(str1, ps1);
//     printf("바뀐 문자열: %s\n", str1);
//     sc(str1, ps2);
//     printf("바뀐 문자열: %s\n", str1);
//     sc(str1, "banana");
//     printf("바뀐 문자열: %s\n", str1);

//     return 0;
// }

// void sc(char *pstr1, char *pstr2){
//     // int i=0;
//     while(*pstr2 != '\0'){
//         *pstr1 = *pstr2;
//         pstr1++;
//         pstr2++;
//         // i++;
//     }
//     *pstr1 = '\0';

// }
//--------------------------------------------------------------------------strncpy
// void sc(char *ps1, char *ps2, int size);
// int main(){
//     char str[20] = "mango tree";
//     // strncpy(str, "apple-pie", 5);
//     sc(str, "apple-pie", 5);
//     printf("%s\n", str);
//     return 0;
// }
// void sc(char *ps1, char *ps2, int size){
//     int i = 0;
//     while((i<size && *ps2 != '\0')){
//         *(ps1 + i) = *(ps2 + i);
//         i++;
//     }
//     // while(i<size){
//     //     *(ps1 + i) = '\0';
//     //     i++;
//     // }
// }


//-----------------------------------------------------------------------strcat, strncat
// void scat(char *ps1, char *ps2);
// void sncat(char *ps1, char *ps2, int size);
// int main(){
//     char str[80] = "straw";
//     // strcat(str, "berry");
//     scat(str, "berry");
//     printf("%s\n", str);
//     // strncat(str, "piece", 3);
//     sncat(str, "piece", 3);
//     printf("%s\n", str);

//     return 0;    
// }
// void scat(char *ps1, char *ps2){
//     int i =0, j = 0;
//     while(*(ps1 + i) != '\0'){
//         i++;
//     }
//     while(*(ps2 + j) != '\0'){
//         *(ps1 + i) = *(ps2 + j);
//         i++;
//         j++;
//     }
//     *(ps1 + i) = '\0';
// }
// void sncat(char *ps1, char *ps2, int size){
//     int i = 0, j = 0;
//     while(*(ps1 + i) != '\0'){
//         i++;
//     }
//     while(j<size && *(ps2 + j) != '\0'){
//         *(ps1 + i) = *(ps2 + j);
//         i++;
//         j++;
//     }
//     *(ps1 + i) = '\0';
// }

//-------------------------------------------------------------------------------strlen
// int get_len(char *ps);
// int main(){
//     char str1[80], str2[80];
//     char *resp;

//     printf("2개의 과일 이름 입력: ");
//     scanf("%s%s", str1, str2);
//     if(get_len(str1)>get_len(str2)){
//         resp = str1;
//     }
//     else if(get_len(str1)<get_len(str2)){
//         resp = str2;
//     }
//     else{
//         printf("이름의 길이가 같다.\n");
//         return 0;
//     }

//     printf("이름이 긴 과일은 : %s\n", resp);
    
//     return 0;
// }
// int get_len(char *ps){
//     int i = 0;
//     while(*(ps + i) != '\0'){
//         i++;
//     }
//     return i;
// }

//--------------------------------------------------------------------------------strcmp
// int cmp(char *ps1, char *ps2);
// int main(){
//     char str1[80] = "peach";
//     char str2[80] = "peach";
//     printf("사전에 나중에 나오는 과일 이름: ");
//     if(cmp(str1, str2)>0){
//         printf("%s\n", str1);
//     }
//     else if(cmp(str1, str2)<0){
//         printf("%s\n", str2);
//     }
//     else if(cmp(str1, str2)==0){
//         printf("같은 문자열\n");
//     }

//     return 0;
// }
// int cmp(char *ps1, char *ps2){
//     int i =0;
//     while(*(ps1 + i) == *(ps2 + i)){
//         i++;
//         if(*(ps1 + i) == '\0' && *(ps2 + i) == '\0') return 0;
//     }
//     if(*(ps1 + i) > *(ps2 + i)) return 1;
//     else if(*(ps1 + i) < *(ps2 + i)) return -1;
// }

//--------------------------------------------------------------------------------strncmp
// int ncmp(char *ps1, char *ps2, int size);
// int main(){
//     char str1[80] = "peace";
//     char str2[80] = "peach";
//     printf("사전에 나중에 나오는 과일 이름: ");
//     if(ncmp(str1, str2, 3)>0){
//         printf("%s\n", str1);
//     }
//     else if(ncmp(str1, str2, 3)<0){
//         printf("%s\n", str2);
//     }
//     else if(ncmp(str1, str2, 3)==0){
//         printf("같은 문자열\n");
//     }

//     return 0;
// }
// int ncmp(char *ps1, char *ps2, int size){
//     int i =0;
//     while(*(ps1 + i) == *(ps2 + i) && i<size){
//         i++;
//         if(*(ps1 + i) == '\0' && *(ps2 + i) == '\0') return 0;
//     }
//     if(i == size) return 0;
//     else if(*(ps1 + i) > *(ps2 + i)) return 1;
//     else if(*(ps1 + i) < *(ps2 + i)) return -1;
// }