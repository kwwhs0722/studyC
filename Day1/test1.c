#include <stdio.h>
//#include <string.h>

int main(void)
{
/*    int a;
    int b, c;
    double da;
    char ch;

    a = 10;
    b = a;
    c = a + 20;
    da=  3.5;
    ch = 'A';

    printf("변수 a의 값 : %d\n", a);
    printf("변수 b의 값 : %d\n", b);
    printf("변수 c의 값 : %d\n", c);
    printf("변수 da의 값 : %.1lf\n", da);
    printf("변수 ch의 값 : %c\n", ch);*/

    /*char ch1 = 'A';
    char ch2 = 105;

    printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
    printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);*/

    /*short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("short형 변수 출력 : %d\n", sh);
    printf("int형 변수 출력 : %d\n", in);
    printf("long형 변수 출력 : %ld\n", ln);
    printf("long long형 변수 출력 : %lld\n", lln);*/
    
    /*unsigned int a;

    a = 4294967295;
    printf("%d\n", a);
    a = -1;
    printf("%u\n", a);*/

    /*float ft = 1.234567890123456789;
    double db = 1.234567890123456789;

    printf("float형 변수의 값 : %.20f\n", ft);
    printf("double형 변수의 값 : %.20lf\n", db);*/


    /*char fruit[20] = "strawberry";

    printf("딸기 : %s\n", fruit);
    printf("딸기잼 : %s %s\n", fruit, "jam");*/

    /*char fruit[20] = "strawberry";

    printf("%s\n", fruit);
    strcpy(fruit,"banana");
    printf("%s\n", fruit);*/

    /*int income = 0;
    double tax;
    const double tax_rate = 0.12;

    income = 456;
    tax = income * tax_rate;
    printf("세금은 %.1lf입니다.\n", tax);*/


    /*int a;
    scanf("%d", &a);
    printf("입력된 값 : %d\n", a);*/

    /*int age;
    double height;

    printf("나이와 키를 입력하세요 : ");
    scanf("%d %lf", &age, &height);

    printf("나이는 %d살, 키는 %.1lfcm입니다", age, height);*/

    /*char grade;
    char name[20];

    printf("학점 입력 : ");
    scanf("%c", &grade);

    printf("이름 입력 : ");
    scanf("%s", name);
    printf("%s의 학점은 %c입니다.\n", name, grade);*/

    /*int a, b;
    int sum, sub, mul, inv;

    a = 10;
    b = 20;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    inv = -a;

    printf("a의 값 : %d, b의 값 : %d\n", a ,b);
    printf("덧셈 : %d\n", sum);
    printf("뺄셈 : %d\n", sub);
    printf("곱셈 : %d\n", mul);
    printf("음수연산 : %d\n", inv);*/

    /*double a;
    int b;
    int c;

    a = 5.0 / 2.0;
    b = 5 / 2;
    c = 5 % 2;

    printf("a : %.1lf\n", a);
    printf("b : %d\n", b);
    printf("c : %d\n", c);*/

    /*int a = 5, b = 5;
    int pre, post;

    pre = (++a) * 3;
    post = (b++) * 3;

    printf("초깃값 a = %d, b = %d\n", a, b);
    printf("전위형 : (++a) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);*/

    /*int a = 10, b = 20, c = 10;
    int res;

    res=(a>b);
    printf("a > b : %d\n", res);
    res=(a>=b);
    printf("a => b : %d\n", res);
    res=(a<b);
    printf("a < b : %d\n", res);
    res=(a<=b);
    printf("a =< b : %d\n", res);
    res=(a<=c);
    printf("a =< c : %d\n", res);
    res=(a==c);
    printf("a == c : %d\n", res);
    res=(a!=c);
    printf("a != b : %d\n", res);*/

    /*int a = 30;
    int res;

    res = (a>10)&&(a<20);
    printf("(a>10)&&(a<20) : %d\n", res);
    res = (a<10)||(a>20);
    printf("(a<10)||(a>20) : %d\n", res);
    res = !(a>30);
    printf("!(a>30) : %d\n", res);*/

    
    /*int a =10, b = 20, res;

    a+b;
    printf("%d + %d = %d\n", a, b, a + b);

    res = a + b;
    printf("%d + %d = %d\n", a, b, res);*/

    /*int a = 20, b = 3;
    double res;

    res = ((double)a) / ((double)b);
    printf("a = %d, b = %d\n", a,b);
    printf("a / b의 결과 : %.10lf\n", res);

    a = (int)res;
    printf("(int)%.2lf의 결과 : %d\n", res, a);*/

    /*int a = 10 ;
    double b = 3.4;

    printf("int형 변수의 크기 : %d\n", sizeof(a));
    printf("double형 변수의 크기 : %d\n", sizeof(b));
    printf("정수형 상수의 크기 : %d\n", sizeof(10));
    printf("수식의 결과값의 크기 : %d\n", sizeof(1.5+3.4));
    printf("char 자료형의 크기 : %d\n", sizeof(char));*/

    /*int a = 10, b = 20;
    int res = 2;

    a +=20;
    res *= b + 10;
    printf("a = %d, b = %d\n", a, b);
    printf("res = %d\n", res);*/

    /*int a = 10, b = 20, res;

    res = (a > b) ? a*b : b*3;
    printf("큰 값 :%d\n", res); */

    /*int a = 10;
    int b = 12;

    printf("a & b : %d\n", a & b); // AND
    printf("a ^ b : %d\n", a ^ b); // XOR
    printf("a | b : %d\n", a | b); // OR
    printf("~a : %d\n", ~a); //부정 NOT a
    printf("a << 1 : %d\n", a << 1); // 비트 왼쪽으로 한칸 이동
    printf("a >> 2 : %d\n", a >> 2); // 비트 오른쪽으로 두칸 이동 */ 

    /*int a = 10, b =5;
    int res;

    res = a / b * 2;
    printf("res = % d\n", res);
    res = ++a * 3;
    printf("res = % d\n", res);
    res = a > b && a !=5;
    printf("res = % d\n", res);
    res = a % 3 == 0;
    printf("res = % d\n", res);*/


    

    



    return 0;

    
}