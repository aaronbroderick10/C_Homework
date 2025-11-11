#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float calculateDistance(struct Point p1, struct Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct Point p1, p2;
    float distance;
    printf("Enter coordinates of Point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter coordinates of Point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    distance = calculateDistance(p1, p2);
    printf("\nDistance between points = %.2f\n", distance);

    return 0;
}

