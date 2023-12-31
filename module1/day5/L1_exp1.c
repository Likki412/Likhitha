#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

int main() {
     
    struct Box myBox;
    struct Box* boxPtr;

    boxPtr = &myBox;

    // Taking inputs
    printf("Enter the length: ");
    scanf("%lf", &(boxPtr->length));

    printf("Enter the width: ");
    scanf("%lf", &(boxPtr->width));

    printf("Enter the height: ");
    scanf("%lf", &(boxPtr->height));

    // Calculating Volume
    double volume = boxPtr->length * boxPtr->width * boxPtr->height;
    printf("Volume: %.2f\n", volume);

    // Calculating surface area
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
    printf("Total Surface Area: %.2f\n", surfaceArea);

    return 0;
}
