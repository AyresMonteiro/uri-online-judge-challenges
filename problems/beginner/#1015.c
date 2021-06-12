#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point {
	double x;
	double y;
} point;

point * readPoints() {
	point * p = (point *) malloc(sizeof(point) * 2);
	for(int i = 0; i < 2; i++) scanf("%lf %lf", &((p + i)->x), &((p + i)->y));
	return p;
}

double distanceBetweenTwoPoints (point p1, point p2) {
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main () {
	point * points = readPoints();
	printf("%.4lf\n", distanceBetweenTwoPoints(points[0], points[1]));
	free(points);

	return 0;
}


