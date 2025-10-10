#include <stdio.h>

int main() {
    int x, y;

    //user input
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    // question logic
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant I\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant II\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant III\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant IV\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The point (%d, %d) lies at the Origin\n", x, y);
    }

    return 0;
}
