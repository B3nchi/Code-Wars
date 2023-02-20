#include <math.h>
#include <stdio.h>

typedef struct Point {
    double x;
    double y;
}point;

double distance_between_points(point a, point b) {
    return (double) sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

void main(){

    point a, b;
    printf("Enter first point: ");
    scanf("%lf", &a.x);
    scanf("%lf", &a.y);
    
    printf("Enter second point: ");
    scanf("%lf", &b.x);
    scanf("%lf", &b.y);
    
    printf("%.2f", distance_between_points(a, b));
}
