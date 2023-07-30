#include <stdio.h>
#include <stdlib.h>

int main()
{int choice;
    double radius, circumference, area, volume;
    const double PI = 3.14159;

    printf("Menu:\n");
    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            circumference = 2 * PI * radius;
            printf("The circumference of the circle is: %.2lf\n", circumference);

break;
        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            area = PI * radius * radius;
            printf("The area of the circle is: %.2lf\n", area);
            break;
        case 3:
            printf("Enter the radius of the sphere: ");
            scanf("%lf", &radius);
            volume = (4.0 / 3.0) * PI * radius * radius * radius;
            printf("The volume of the sphere is: %.2lf\n", volume);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

}

   



