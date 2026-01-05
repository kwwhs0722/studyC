// #include <stdio.h>
// // #define _USE_MATH_DEFINES
// #include <math.h>
// int main(void){

//     double W, L, Rc, Ddrift, r, eL, eR, rL, rR, delta, delta_deg;
    

//     printf("바퀴 반지름[m] : ");
//     scanf("%lf", &r);
//     printf("트랙폭[m] : ");
//     scanf("%lf", &W);
//     printf("좌측 바퀴 오차율(%%) : ");
//     scanf("%lf", &eL);
//     printf("우측 바퀴 오차율(%%) : ");
//     scanf("%lf", &eR);
//     printf("목표 주행 거리[m] : ");
//     scanf("%lf", &L);
//     if(r<=0 || W<=0 || L<=0){
//         printf("입력 범위를 확인하세요\n");
//         return 1;
//     }

//     rL = r * (1 + ( eL / 100 ));
//     rR = r * (1 + ( eR / 100 ));

//     printf("좌측 유효 반지름(m) : %.5fm\n", rL);
//     printf("우측 유효 반지름(m) : %.5fm\n", rR);

//     Rc = (W/2.0) * (rL+rR) / (rR-rL);
//     printf("곡률반경 : %.2fm\n", Rc);

//     delta = L / Rc;
//     delta_deg = delta * 180 / 3.14;
//     printf("편류각[deg] : %.2f\n", delta_deg);

//     Ddrift = Rc * (1-cos(delta));
//     printf("최종 편류거리(m) : %.2fm\n", Ddrift);





//     return 0;
// }