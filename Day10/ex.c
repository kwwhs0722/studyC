#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int main(){
//     FILE *fp;
//     char str[400];
//     int count = 0;
//     int sf = 0, mo =0;
//     fp = fopen("log.txt", "r");
//     if(fp == NULL){
//         printf("파일이 열리지 않았습니다.\n");
//         return 1;
//     }
    
//     while (fgets(str, sizeof(str), fp)){
//         if(strstr(str, "ERROR")){
//             count++;
//             if(strstr(str, "Sensor failed")){
//                 sf++;
//             }
//             else if(strstr(str, "Motor overload")){
//                 mo++;
//             }
//         }
//     }
//     printf("Error : %d, Sensor failed : %d, Motor overload : %d\n", count, sf, mo);
//     fclose(fp);

//     return 0;
// }

//   총 핑요청횟수
//   가장 많은 핑을 요청한 아이피
//   시간대별 핑 요청횟수 및 가장 잦은 아이피
//   배터리 로그를 이용한 특정 데이터 추출해서 새로운 txt 파일에 기록
//   여태까지 했던 실습들을 하나의 프로그램으로 만들자(결과를 파일에 출력, malloc 사용)

// int main(){
//     FILE *fp;
//     char fast[2048];
//     int count = 0, v4 = 0;
//     int ping;

//     fp = fopen("fast.log", "r");
//     if(!fp){
//         printf("파일이 열리지 않았습니다.\n");
//         return 1;
//     }
//     while (fgets(fast, sizeof(fast), fp)){
//         if(strstr(fast, "{IPv6-ICMP}")) count++;
//         else if(strstr(fast, "{ICMP}")) v4++;
//     }
//     ping = count + v4 / 2;
//     printf("%d\n", ping);


//     return 0;
// }


// int main(void){
//     FILE *fp;
//     char str[2048];

//     fp = fopen("fast.log", "r");
//     if(!fp){
//         printf("파일이 열리지 않았습니다.\n");
//         return 1;
//     }

//     char ips[500][100];
//     int cnt[500] = {0};
//     int n = 0;

//     while(fgets(str, sizeof(str), fp)){
//         if (strstr(str, "ICMP Ping") == NULL) continue;

//         char *p = strstr(str, "}");
//         if(p == NULL) continue;

//         p++;
//         while(*p == ' ') p++;

//         char ip[40];
//         int i = 0;
//         while(*p != '\0' && *p != ' ' && i < 99){
//             ip[i++] = *p;
//             p++;
//         }
//         ip[i] = '\0';

//         // if (strstr(ip, ".") != NULL) {
//         //     if (strstr(ip, ":8") == NULL) continue;
//         // }

//         int num = -1;
//         for(int j = 0; j < n; j++){
//             if(strcmp(ips[j], ip) == 0){
//                 num = j;
//                 break;
//             }
//         }

//         if(num == -1){
//             if (n >= 500) {
//                 printf("IP가 너무 많습니다.\n");
//                 fclose(fp);
//                 return 1;
//             }
//             strcpy(ips[n], ip);
//             cnt[n] = 1;
//             n++;
//         } else {
//             cnt[num]++;
//         }
//     }

//     fclose(fp);

//     int max = -1;
//     int maxidx = -1;
//     for(int i = 0; i < n; i++){
//         if(cnt[i] > max){
//             max = cnt[i];
//             maxidx = i;
//         }
//     }

//     if (maxidx >= 0)
//         printf("가장 요청 많은 IP: %s (%d회)\n", ips[maxidx], max);
//     else
//         printf("데이터가 없습니다.\n");

//     return 0;
// }


int main(void){
    FILE *fp;
    char str[2048];
    char ips[500][100];
    int n = 0;
    int hour[24] = {0};
    int hourIP[24][500];
    for(int i=0; i<24; i++){
        for(int j=0; j<500; j++){
            hourIP[i][j] = 0;
        }
    }
    while(fgets(str, sizeof(str), fp)){
        char *p = strstr(str, "-");
        p++;
        int i = 0;
        while(*p != '\0' && *p != ' ' && *p != ':' && i < 99){
            hour[i++] = *p;
            p++;
        }
        hour[i] = '\0';
        
    }

    fp = fopen("fast.log", "r");
    if(!fp){
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }


    return 0;
}