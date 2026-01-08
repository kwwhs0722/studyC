#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// int main(){
//     srand(time(NULL));
//     double dist[360];
//     int i, next = 0;

//     dist[0] = rand() % 501; 

//     for(i=1; i<360; i++){
//         next = rand() % 501;
//         if(fabs(dist[i-1]-next)>10){
//             i--;
//             continue;
//         }
//         else dist[i] = next;
//     }

//     for(i=0; i<360; i++){
//         printf("dist[%d] = %.2f  ", i, dist[i]);
//         if(i%5==4) printf("\n");
//     }
    
//     double min_dist = dist[0];
//     int min_deg = 0;

//     for(i=1; i<360; i++){
//         if(dist[i]<min_dist){
//             min_dist = dist[i];
//             min_deg = i;
//         }
//     }

//     printf("\n최솟값(거리): %.2lf, 각도: %d도\n", min_dist, min_deg);

//     return 0;
// }
// //----------------------------------------------------------------------malloc
// int main(){
//     srand(time(NULL));
//     // int dist[360];
//     int *p;
//     int i, next = 0;

//     p = (int *)malloc(360 * sizeof(int));
//     if(p == NULL){
//         printf("메모리가 부족합니다\n");
//         exit(1);
//     }

//     p[0] = rand() % 501; 

//     for(i=1; i<360; i++){
//         next = rand() % 501;
//         if(abs(p[i-1]-next)>10){
//             i--;
//             continue;
//         }
//         else p[i] = next;
//     }

//     for(i=0; i<360; i++){
//         printf("p[%d] = %d  ", i, p[i]);
//         if(i%5==4) printf("\n");
//     }
    
//     int min_dist = p[0];
//     int min_deg = 0;

//     for(i=1; i<360; i++){
//         if(p[i]<min_dist){
//             min_dist = p[i];
//             min_deg = i;
//         }
//     }

//     printf("\n최솟값(거리): %d, 각도: %d도\n", min_dist, min_deg);
//     free(p);

//     return 0;
// }
//---------------------------------------------------------------------------10hz?
int main(){
    srand(time(NULL));
    int *p;

    int i, next = 0;

    p = (int *)malloc(360 * sizeof(int));
    if(p == NULL){
        printf("메모리가 부족합니다\n");
        exit(1);
    }

    p[0] = rand() % 501; 

    for(i=1; i<360; i++){
        next = rand() % 501;
        if(abs(p[i-1]-next)>10){
            i--;
            continue;
        }
        else p[i] = next;
    }

    for(i=0; i<360; i++){
        printf("p[%d] = %d  ", i, p[i]);
        if(i%5==4) printf("\n");
    }
    
    int min_dist = p[0];
    int min_deg = 0;

    for(i=1; i<360; i++){
        if(p[i]<min_dist){
            min_dist = p[i];
            min_deg = i;
        }
    }

    printf("\n최솟값(거리): %d, 각도: %d도\n", min_dist, min_deg);
    free(p);

    return 0;
}