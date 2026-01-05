#include <stdio.h>

// int main(){
//     int ary[3];
//     *(ary + 0) = 10;
//     *(ary + 1) = *(ary + 0) + 20;
//     printf("세 번째 배열 요소 입력 : ");
//     scanf("%d", ary + 2);
//     for(int i=0; i<3; i++){
//         printf("%5d", *(ary+i));
//     }
//     printf("\n");

//     return 0;
// }


// int main(){
//     int ary[3];
//     int *pa = ary;

//     *pa = 10;
//     *(pa + 1) = 20;
//     pa[2] = pa[0] + pa[1];
//     for(int i=0; i<3; i++){
//         printf("%5d", pa[i]);
//     }
//     printf("\n");

//     return 0;
// }


// int main(){
//     int ary[3] = {10, 20, 30};
//     int *pa = ary;
//     printf("배열의 값: \n");
//     for(int i=0; i<3; i++){
//         printf("%5d\n", *pa);
//         printf("%u\n", pa);
//         pa++;
//     }
//     printf("%u\n", pa);

//     return 0;
// }


// int main(){
//     int ary[5] = {10, 20, 30, 40, 50};
//     int *pa = ary;
//     int *pb = pa + 3;

//     printf("pa: %u\n", pa);
//     printf("pb: %u\n", pb);
//     pa++;
//     printf("pb - pa = %u\n", pb - pa);
//     printf("앞에 있는 배열 요소의 값: ");
//     if(pb > pa) printf("%d\n", *pa);
//     else printf("%d\n", *pb);


//     return 0;
// }