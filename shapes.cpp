#include "stdafx.h"
#include "stdio.h"



int main()
{

	
	
	
		int shape;
		float triangle, verticalHeight, base;
		float square, side;
		float rectangle, width, height;
		float parallelogram;
		float circle, radius;
		float trapezium, a, b;
		float ellipse;
		float sector, angle;
		int again = 1;
		
		do
		{
			printf("Choose one of the following: \n1. Triangle \n2. Square \n3. Rectangle \n4. Parallelogram \n5. Circle \n6. Trapezium \n7. Ellipse \n7. Sector \nChoice: ");
			scanf_s("%d", &shape);

			if (shape == 1)
			{
				printf("Enter the vertical height: ");
				scanf_s("%f", &verticalHeight);

				printf("Enter the base width: ");
				scanf_s("%f", &base);
				triangle = (.5 * verticalHeight * base);

				printf("Area = %.2f\n", triangle);
			}

			else if (shape == 2)
			{
				printf("Enter the side length: ");
				scanf_s("%f", &side);
				square = (side*side);

				printf("Area = %.2f\n", square);

			}

			else if (shape == 3)
			{
				printf("Enter the width: ");
				scanf_s("%f", &width);

				printf("Enter the height: ");
				scanf_s("%f", &height);
				rectangle = (width * height);

				printf("Area = %.2f\n", rectangle);

			}

			else if (shape == 4)
			{
				printf("Enter the base width: ");
				scanf_s("%f", &base);

				printf("Enter the vertical height: ");
				scanf_s("%f", &verticalHeight);

				parallelogram = (base * verticalHeight);

				printf("Area = %.2f\n", parallelogram);

			}

			else if (shape == 5)
			{
				printf("Enter the radius: ");
				scanf_s("%f", &radius);

				circle = (3.14159265359 * radius * radius);

				printf("Area = %.2f\n", circle);
			}

			else if (shape == 6)
			{
				printf("Enter side a:");
				scanf_s("%f", &a);

				printf("Enter side b:");
				scanf_s("%f", &b);

				printf("Enter the vertical height: ");
				scanf_s("%f", &verticalHeight);

				trapezium = (.5*(a + b) * verticalHeight);

				printf("Area = %.2f\n", trapezium);

			}

			else if (shape == 7)
			{
				printf("Enter value for a: ");
				scanf_s("%f", &a);

				printf("Enter value for b: ");
				scanf_s("%f", &b);

				ellipse = (3.14159265359 * a * b);

				printf("Area = %.2f\n", ellipse);
			}

			else if (shape == 8)
			{
				printf("Enter the radius: ");
				scanf_s("%f", &radius);

				printf("Enter the angle (in radians): ");
				scanf_s("%f", &angle);

				sector = (.5 * (radius * radius) * angle);

				printf("Area = %.2f\n", sector);


			}

			else
			{
				printf("Error\n");

			}

			printf("Enter 1 to do again or 0 to exit.\n");
			scanf_s("%d", &again);
		}
		while (again == 1);
	
}
