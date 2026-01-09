#include <stdio.h>

// typedef struct{
//     int x;
//     int y;
// }Position;
// void move(Position *p, int dx, int dy);
// int main(){
//     Position pos;
//     int dx, dy;
//     pos.x = 0, pos.y = 0;
//     printf("첫 번째 이동할 거리 입력: ");
//     scanf("%d%d", &dx, &dy);
//     move(&pos, dx, dy);
//     printf("두 번째 이동할 거리 입력: ");
//     scanf("%d%d", &dx, &dy);
//     move(&pos, dx, dy);
//     printf("최종 위치: (%d, %d)\n", pos.x, pos.y);

//     return 0;
// }
// void move(Position *p, int dx, int dy){
//     p->x += dx;
//     p->y += dy;    
// }

// typedef struct{
//     double left; //왼쪽바퀴속도
//     double right; //오른쪽바퀴속도
// }WheelSpeed;
// typedef struct{
//     double linear; //선속도
//     double angular; //각속도
// }RobotSpeed;
// RobotSpeed computeSpeed(WheelSpeed w, double wheel_radius, double wheel_distance);
// int main(){
//     WheelSpeed ws;
//     RobotSpeed rs;
//     double r, d;
//     printf("왼쪽 바퀴 속도(rad/s): ");
//     scanf("%lf", &ws.left);
//     printf("오른쪽 바퀴 속도(rad/s): ");
//     scanf("%lf", &ws.right);
//     printf("바퀴반지름(m): ");
//     scanf("%lf", &r);
//     printf("바퀴 간 거리(m): ");
//     scanf("%lf", &d);

//     rs = computeSpeed(ws, r, d);
//     printf("\n선속도: %.2f m/s\n", rs.linear);
//     printf("각속도: %.2f rad/s\n", rs.angular);


//     return 0;
// }
// RobotSpeed computeSpeed(WheelSpeed w, double wheel_radius, double wheel_distance){
//     RobotSpeed rs;
//     rs.linear = wheel_radius * (w.right + w.left) / 2;
//     rs.angular = wheel_radius * (w.right - w.left) / wheel_distance;
//     return rs;
// }