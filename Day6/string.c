#include <stdio.h>

// int main(){
//     char small, cap = 'G';
//     if((cap>='A')&&(cap<='Z')){
//         small = cap + ('a'-'A');
//     }
//     printf("대문자 : %c\n", cap);
//     printf("소문자 : %c\n", small);
//     return 0;
// }

// int main(){
//     char ch1, ch2;
//     scanf(" %c %c", &ch1, &ch2);
//     printf("[%c%c]", ch1, ch2);
//     printf("\n");
//     return 0;
// }

// int main(){
//     int ch;
//     ch = getchar();
//     printf("입력한 문자 : ");
//     putchar(ch);
//     putchar('\n');

//     return 0;
// }

// int main(){
//     char ch;
//     for(int i=0; i<3; i++){
//         scanf("%c", &ch);
//         printf("%c", ch);
//     }

//     return 0;
// }

// int main(){
//     int res;
//     char ch;
//     while(1){
//         res = scanf("%c", &ch);
//         if(res == -1) break;
//         printf("%d ", ch);
//     }
//     return 0;
// }

// void my_gets(char *str, int size);
// int main(){
//     char str[7];
//     my_gets(str, sizeof(str));
//     printf("입력한 문자열 : %s\n", str);
//     return 0;
// }
// void my_gets(char *str, int size){
//     int ch;
//     int i = 0;
//     ch=getchar();
//     while((ch != '\n')&&(i<size -1)){
//         str[i] = ch;
//         i++;
//         ch = getchar();
//     }
//     str[i] = '\0';
// }

// int main(){
//     int num, grade;
//     printf("학번 입력: ");
//     scanf("%d", &num);
//     getchar();
//     printf("학점 입력: ");
//     grade = getchar();
//     printf("학번 : %d, 학점 : %c\n", num, grade);
    

//     return 0;
// }

// int main(){
//     printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
//     printf("두 번째 문자의 주소 값 : %p\n", "apple"+1);
//     printf("첫 번째 문자 : %c\n", *"apple");
//     printf("두 번째 문자 : %c\n", *("apple"+1));
//     printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);


//     return 0;
// }

// int main(){
//     char *dessert = "apple";

//     printf("오늘 후식은 %s입니다.\n", dessert);
//     dessert = "banana";
//     printf("내일 후식은 %s입니다.\n", dessert);


//     return 0;
// }

// int main(){
//     char str[80];
//     printf("문자열 입력: ");
//     scanf("%s", str);
//     printf("첫 번째 단어: %s\n", str);
//     scanf("%s", str);
//     printf("버퍼에 남아 있는 두 번째 단어: %s\n", str);

//     return 0;
// }

// int main(){
//     char str[80];
//     printf("공백이 포함된 문자열 입력 : ");
//     gets(str);
//     printf("입력한 문자열은 %s입니다.\n", str);
//     return 0;
// }

// int main(){
//     char str[80];
//     printf("공백이 포함된 문자열 입력 : ");
//     fgets(str, sizeof(str), stdin);
//     str[strlen(str)-1] = '\0';
//     printf("입력한 문자열은 %s입니다.\n", str);
//     return 0;
// }

// int main(){
//     int age;
//     char name[20];
//     printf("나이 입력 : ");
//     scanf("%d", &age);
//     printf("이름 입력 : ");
//     scanf("%s", name);
//     printf("나이: %d, 이름: %s\n", age, name);
//     return 0;
// }

// int main(){
//     char str[80] = "apple juice";
//     char *ps = "banana";

//     puts(str);
//     fputs(ps, stdout);
//     puts("milk");

//     return 0;
// }

// int main(){
//     char ani[20];
//     char why[80];
//     printf("좋아하는 동물 : ");
//     scanf("%s", ani);
//     printf("좋아하는 이유 : ");
//     getchar();
//     fgets(why, sizeof(why), stdin);
//     printf("%s is %s", ani, why);
//     return 0;
// }


//scanf, gets, fgets, puts, fputs, -> 개행포함?, 줄바꿈?, 개행문자 처리(삭제)  정리

// scanf --> \0 있음 버퍼에 \n 남아있음