#include <stdio.h>

// Define a structure for a point in 2D space
typedef struct {
    float x;  // x-coordinate
    float y;  // y-coordinate
} Point;

// Function to calculate the square of a number
float square(float num) {
    return num * num;
}

// Function to calculate the square root using Newton's method (approximation)
float sqrt_approx(float num) {
    if (num == 0) return 0; // sqrt(0) = 0
    float guess = num / 2.0;  // Initial guess
    float epsilon = 0.0001;   // Precision threshold
    while (1) {
        float next_guess = (guess + num / guess) / 2.0;  // Newton's method formula
        if ((guess - next_guess) < epsilon) {
            break;  // When the difference is small enough, stop
        }
        guess = next_guess;
    }
    return guess;
}

// Function to calculate the distance between two points
float calculateDistance(Point p1, Point p2) {
    // Using the distance formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt_approx(square(dx) + square(dy));
}

// Function to check if a point is within a rectangular boundary
// Rectangle is defined by bottom-left corner (x1, y1) and top-right corner (x2, y2)
int isPointInRectangle(Point p, float x1, float y1, float x2, float y2) {
    // Check if the point lies within the rectangle's bounds
    return (p.x >= x1 && p.x <= x2 && p.y >= y1 && p.y <= y2);
}

int main() {
    Point p1, p2;
    float x1, y1, x2, y2;
    
    // Input the coordinates of the first point
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    
    // Input the coordinates of the second point
    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    
    // Calculate the distance between the two points
    float distance = calculateDistance(p1, p2);
    printf("Distance between point 1 and point 2: %.2f\n", distance);
    
    // Input the rectangle's bottom-left and top-right corner coordinates
    printf("Enter bottom-left corner of rectangle (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter top-right corner of rectangle (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    
    // Check if point 1 lies within the rectangle
    if (isPointInRectangle(p1, x1, y1, x2, y2)) {
        printf("Point 1 is inside the rectangle.\n");
    } else {
        printf("Point 1 is outside the rectangle.\n");
    }
    
    // Check if point 2 lies within the rectangle
    if (isPointInRectangle(p2, x1, y1, x2, y2)) {
        printf("Point 2 is inside the rectangle.\n");
    } else {
        printf("Point 2 is outside the rectangle.\n");
    }

    return 0;
}
