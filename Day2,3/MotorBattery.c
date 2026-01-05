#include <stdio.h>

int main(void){

    //이동로봇 모터 적정성 평가
 
    /*int N;
    double m, SF, DM, R, t, G;
    const double c = 0.018;
    const double g = 9.81;
    

    printf("총 하중(kg) : ");
    scanf("%lf", &m);
    printf("구동 바퀴 수 : ");
    scanf("%d", &N);
    printf("모터 정격 토크(N*m) : ");
    scanf("%lf", &t);
    printf("감속비 : ");
    scanf("%lf", &G);
    printf("바퀴 반지름(m) : ");
    scanf("%lf", &R);
    printf("안전계수 : ");
    scanf("%lf", &SF);
    printf("설계마진 : ");
    scanf("%lf", &DM);
    
    double W = m*g;
    

    double Fmin;
    Fmin = c * W * SF * DM;
    printf("\n필요한 최소 견인력 : %.2lf\n", Fmin);
    double Fmotor;
    Fmotor = (t*G*N) / R;
    printf("모터가 낼 수 있는 견인력 : %.2lf\n", Fmotor);

    if (Fmin<=Fmotor){
        printf("판정 : 만족");
    }
    else {
        printf("판정 : 불만족");
    }*/


    //이동로봇 배터리 용량 선정

    /*double i_load, vel, R, v, c, eta;
    
    printf("평균전류(A) : ");
    scanf("%lf", &i_load);
    printf("평균속도(km/h) : ");
    scanf("%lf", &vel);
    printf("예비율[0~1] : ");
    scanf("%lf", &R);
    printf("공칭전압[v] : ");
    scanf("%lf", &v);
    printf("용량[Ah] : ");
    scanf("%lf", &c);
    printf("시스템 효율[0~1] : ");
    scanf("%lf", &eta);
    if (v<=0 || c<=0 || i_load <= 0 || vel < 0 || R <0 || R>1 || eta<0 || eta > 1){
        printf("입력값 범위를 확인하세요\n");
        return 1;
        
    }
    
    double E_usable = v * c * eta * (1-R);
    double P = (v * i_load) * 2 / eta;
    double t = E_usable / P;
    double d = vel * t;

    printf("사용 가능 에너지(Wh) : %.2f\n", E_usable);
    printf("소비전력(W) : %.2f\n", P);
    printf("런타임(h) : %.2f\n", t);
    printf("주행거리(km) : %.2f\n", d);*/
    





    return 0;


}