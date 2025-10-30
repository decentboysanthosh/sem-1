/*Write a C program to accept a coordinate point in an XY coordinate system and
 determine in which quadrant the coordinate point lies.*/
 #include<stdio.h>
 int main()
 {
 	int x, y;

    // Input coordinate point
    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);

    // Check quadrant or axis
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in the First Quadrant.\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in the Second Quadrant.\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in the Third Quadrant.\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in the Fourth Quadrant.\n", x, y);
    }
    else if (x == 0 && y == 0) {
        printf("The point (%d, %d) lies at the Origin.\n", x, y);
    }
    else if (x == 0) 
        printf("The point (%d, %d) lies on the Y-axis.\n", x, y);
    
    else if (y == 0) {
        printf("The point (%d, %d) lies on the X-axis.\n", x, y);
    }

    return 0;


 }


