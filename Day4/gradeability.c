// #include <stdio.h>
// #include <math.h>

// int main(void){

//     double m, T, G, eta, r, c, SF, T_total, F_avail, F_need, grade;
//     int N;
//     const double g = 9.81;


//     printf("총 질량[kg] : ");
//     scanf("%lf", &m);
//     printf("모터 정격토크[Nm] : ");
//     scanf("%lf", &T);
//     printf("구동 모터 수 : ");
//     scanf("%d", &N);
//     printf("감속비 : ");
//     scanf("%lf", &G);
//     printf("구동 효율(0~1) : ");
//     scanf("%lf", &eta);
//     printf("바퀴 반지름[m] : ");
//     scanf("%lf", &r);
//     printf("구름계수(0.015~0.03) : ");
//     scanf("%lf", &c);
//     printf("안전계수(>=1) : ");
//     scanf("%lf", &SF);

//     if ( m <=0 || T <=0 || N <= 0 || G <= 0 || eta <= 0 || eta > 1 || r < 0 || c < 0 || SF < 1){
//         printf("입력값 확인\n");
//         return 1;
//     }

//     T_total = N * T * G * eta;
//     F_avail = T_total / r;

//     printf("F_avail : %.2f\n", F_avail);

//     double sin_theta = ((F_avail/SF)-(c*m*g)) / (m*g);
//     clip(sin_theta, 0.0, 1.0);

//     // if(sin_theta < 0.0){
//     //     sin_theta = 0.0;
//     // }
//     // else if(sin_theta >1.0){
//     //     sin_theta = 1.0;
//     // }

//     double theta = asin(sin_theta);
//     double theta_max = theta * 180 / 3.1415;

//     printf("등판 가능 최대각[deg] : %.4f\n", theta_max);

//     grade = tan(theta) * 100;

//     printf("등판율[%%] : %.2f%%\n", grade);



//     return 0;
// }

// double clip(double x, double min, double max){
//     if(x< min) return min;
//     if(x> max) return max;
//     return x;
// }