#include <stdio.h>

int main(){
    double x1, x2, x3, y1, y2, y3, a, b;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    int tmp = x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1;
    if (tmp > 0) printf("1");
    else if (tmp < 0) printf("-1");
    else printf("0");
    return 0;
}
