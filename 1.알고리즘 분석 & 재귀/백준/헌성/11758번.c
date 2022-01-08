#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
/*문제이름:CCW
2차원 좌표 평면 위에 있는 점 3개 P1, P2, P3가 주어진다. 
P1, P2, P3를 순서대로 이은 선분이 어떤 방향을 이루고 있는지 구하는 프로그램을 작성하시오.

출력
P1, P2, P3를 순서대로 이은 선분이 반시계 방향을 나타내면 1, 
시계 방향이면 -1, 일직선이면 0을 출력한다.
*/

int main(){
    double fir_dir,sec_dir,dir[3][2];
    for(int i=0;i<3;i++) scanf("%lf %lf",&dir[i][0],&dir[i][1]);// 3점의 위치를 입력받음
    fir_dir = (dir[2][1] - dir[0][1])/(dir[2][0] - dir[0][0] );
    sec_dir = (dir[1][1] - dir[0][1])/(dir[1][0] - dir[0][0] );
 
    // printf("%lf %lf\n",fir_dir,sec_dir);

    if(fir_dir < sec_dir) printf("-1");
    else if(fir_dir > sec_dir) printf("1");
    else printf("0");


}
