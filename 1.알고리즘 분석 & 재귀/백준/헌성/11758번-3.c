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
    double rad_AB,rad_BC,rst,x,y,angle;
    //fir_dir: A와 B를 연결
    //sec_dir: B와 C를 연결
    for(int i=0;i<3;i++) scanf("%lf %lf",&dir[i][0],&dir[i][1]);// 3점의 위치를 입력받음
    fir_dir = (dir[1][1]-dir[0][1])/(dir[1][0]-dir[0][0]);//AB
    sec_dir = (dir[2][1]-dir[1][1])/(dir[2][0]-dir[1][0]);//BC

    rad_AB = atan(fir_dir);//angle_AB = swap_rad_to_angle(angle_AB);
    rad_BC = atan(sec_dir);//angle_BC = swap_rad_to_angle(angle_BC);

    angle = swap_rad_to_angle(fir_dir-sec_dir);
    // if(dir[0][1] <= dir[1][1]){//A의 y보다 B의 y가 작은경우

    // }


    printf("%lf\n",angle);

}
