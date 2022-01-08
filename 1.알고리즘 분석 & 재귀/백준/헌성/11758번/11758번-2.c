#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
#include  <math.h>
#define PI 3.141592

double swap_rad_to_angle(double x){
    x = (x*180/PI);
    return x;
}

int main(){
    double dir[3][2],fir_dir,sec_dir;
    double rad_AB,rad_BC,rst,x,y,val;
    //fir_dir: A와 B를 연결
    //sec_dir: B와 C를 연결
    for(int i=0;i<3;i++) scanf("%lf %lf",&dir[i][0],&dir[i][1]);// 3점의 위치를 입력받음
    x = dir[0][0],y=dir[0][1];
    fir_dir = (dir[1][1]-dir[0][1])/(dir[1][0]-dir[0][0]);
    sec_dir = (dir[2][1]-dir[0][1])/(dir[2][0]-dir[0][0]);

    // printf("%lf\n",fir_dir);
    // printf("%lf",sec_dir);

    // //B의 위치를 원점으로 이동하고 이동한 벡터만큼 다른 위치의 점도 평행이동한다.
    for(int i=0;i<3;i++){dir[i][0] -= x;dir[i][1] -= y;}
    //라디안 변환
    rad_AB = atan(fir_dir);//angle_AB = swap_rad_to_angle(angle_AB);
    rad_BC = atan(sec_dir);//angle_BC = swap_rad_to_angle(angle_BC);

    val = tan(rad_AB - rad_BC);
    rst = atan(val); rst = swap_rad_to_angle(rst);

    if(0 < rst && rst < 180) printf("-1");
    else if(rst < 0) printf("-1");
    else printf("0");
    // printf("%lf",rst);

    // for(int i=0;i<3;i++)printf("%.2lf %.2lf\n",dir[i][0],dir[i][1]);
    




    


}
