#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct student{
//     int num;
//     double grade;
// };
// int main(){
//     struct student s1;
//     s1.num = 2;
//     s1.grade = 2.7;
//     printf("학번: %d\n", s1.num);
//     printf("학점: %.2f\n", s1.grade);

//     return 0;
// }

// struct profile{
//     char name[20];
//     int age;
//     double height;
//     char *intro;
// };

// int main(){
//     int size = 100;
//     struct profile yuni;
//     strcpy(yuni.name, "서하윤");
//     yuni.age = 17;
//     yuni.height = 164.5;
//     yuni.intro = (char *)malloc(size);
//     printf("자기소개(한글 %d자 이내로) : ", size/2);
//     fgets(yuni.intro, size, stdin);
//     yuni.intro[strlen(yuni.intro)-1] = '\0';

//     printf("이름: %s\n", yuni.name);
//     printf("나이: %d\n", yuni.age);
//     printf("키: %.2f\n", yuni.height);
//     printf("자기소개: %s\n", yuni.intro);
//     free(yuni.intro);

//     return 0;
// }

// struct profile{
//     int age;
//     double height;
// };
// struct student{
//     struct profile pf;
//     int id;
//     double grade;
// };
// int main(){
//     struct student yuni;
//     yuni.pf.age = 17;
//     yuni.pf.height = 164.5;
//     yuni.id = 333;
//     yuni. grade = 4.3;

//     printf("나이: %d\n", yuni.pf.age);
//     printf("키: %.2f\n", yuni.pf.height);
//     printf("학번: %d\n", yuni.id);
//     printf("학점: %.1f\n", yuni.grade);
    
//     return 0;
// }

// struct student{
//     int id;
//     char name[20];
//     double grade;
// };
// int main(){
//     struct student s[3] = {{315, "홍길동", 4.4}, {316, "이순신", 3.7}, {317, "세종대왕", 4.1}};

//     struct student max;

//     max = s[0];
//     for(int i=1; i<3; i++){
//         if(s[i].grade > max.grade) max = s[i];
//     }
    
//     printf("학번: %d\n", max.id);
//     printf("이름: %s\n", max.name);
//     printf("학점: %.1f\n", max.grade);

//     return 0;
// }

// struct vision{
//     double left;
//     double right;
// };
// struct vision exchange (struct vision robot);

// int main(){
//     struct vision robot;
//     printf("시력 입력: ");
//     scanf("%lf %lf", &robot.left, &robot.right);
//     robot = exchange(robot);
//     printf("바뀐 시력: %.2f  %.2f\n", robot.left, robot.right);

//     return 0;
// }
// struct vision exchange(struct vision robot){
//     double temp;
//     temp = robot.left;
//     robot.left = robot.right;
//     robot.right = temp;
//     return robot;
// }

// struct score{
//     int kor;
//     int eng;
//     int math;
// };
// int main(){
//     struct score yuni = {90, 80, 70};
//     struct score *ps = &yuni;
//     printf("국어: %d\n", (*ps).kor);
//     printf("영어: %d\n", ps -> eng);
//     printf("수학: %d\n", ps -> math);

//     return 0;
// }

// struct list{
//     int num;
//     struct list *next;
// };
// int main(){
//     struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
//     struct list *head = &a, *current;
//     a.next = &b;
//     b.next = &c;

//     printf("head->num : %d\n", head -> num);
//     printf("head->next->num : %d\n", head -> next -> num);
//     printf("list all :");
//     current = head;
//     while(current != NULL){
//         printf("%d ", current -> num);
//         current = current -> next;
//     }
//     printf("\n");

//     return 0;
// }

// union student{
//     int num;
//     double grade;
// };
// int main(){
//     union student s1= {315};
//     printf("학번: %d\n", s1.num);
//     s1.grade = 4.4;
//     printf("학점: %.2f\n", s1.grade);
//     printf("학번: %d\n", s1.num);

//     return 0;    
// }

// enum season {SPRING, SUMMER, FALL, WINTER};
// int main(){
//     enum season ss;
//     char *pc = NULL;
//     ss = SPRING;
//     switch(ss){
//         case SPRING:
//             pc = "inline"; break;
//         case SUMMER:
//             pc = "swimming"; break;
//         case FALL:
//             pc = "trip"; break;
//         case WINTER:
//             pc = "skiing"; break;
//     }
//     printf("나의 레저: %s\n", pc);
//     return 0;
// }

// typedef struct{
//     int num;
//     double grade;
// }Student;

// void print_data(Student *ps);

// int main(){
//     Student s[2] = {{315, 4.2}, {333, 3.5}};
//     print_data(&s[0]);

//     return 0;
// }

// void print_data(Student *ps){
//     printf("학번 : %d\n", ps->num);
//     printf("학점 : %.1f\n", (*ps).grade);
// }