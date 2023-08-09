#include <stdio.h>

float RectangleArea(float length, float width){
    float area = length * width;
    return area;
}
float SquareArea(float side){
    float area = side * side;
    return area;
}
float TriangleArea(float base, float height){
    float area = base * height / 2;
    return area;
}
int main(){
    int choice;
    float length, width, side, base, height, area;
    do{
        printf("\n(Menu)\n");
        printf("1. Calculate area of a rectangle.\n");
        printf("2. Calculate area of a square.\n");
        printf("3. Calculate area of a triangle.\n");
        printf("4. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            printf("\nEnter the length of the rectangle: ");
            scanf("%f", &length);
            printf("\nEnter the width of the rectangle: ");
            scanf("%f", &width);
            area = RectangleArea(length,width);
            printf("\nThe area of the rectangle is: %.2f\n",area);
            break;
        case 2:
            printf("\nEnter the side of the square: ");
            scanf("%f",&side);
            area = SquareArea(side);
            printf("\nThe area of the square is: %.2f\n",area);
            break;
        case 3:
            printf("\nEnter the base of the triangle: ");
            scanf("%f",&base);
            printf("\nEnter the height of the triangle: ");
            scanf("%f",&height);
            area = TriangleArea(base,height);
            printf("\nThe area of the rectangle is: %.2f\n",area);
            break;
        case 4:
            printf("\nExiting program");
            break;
        default:
            printf("Please try again.\n");
            break;
        }
    }while (choice != 4);

    return 0;
    
}