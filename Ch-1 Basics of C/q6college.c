#include <stdio.h>
 
int main()
{
	float area, perimeter;
	// For Rectangle
	float l,w;
	printf("Enter the length of rectangle \n");
	scanf("%f", &l);
	printf("Enter the width of rectangle \n");
	scanf("%f", &w);
	area = l*w;
	perimeter = 2*l + 2*w;
	printf ("Area of rectangle is %f and perimeter of rectangle is %f \n", area, perimeter);
	
	// For Square
	float s;
	printf("Enter the side of square \n");
	scanf("%f", &s);
	area = s*s;
	perimeter = 4*s;
	printf ("Area of square is %f and perimeter of square is %f \n", area, perimeter);	
	
	// For Circle
	float r;
	printf("Enter the radius of circle \n");
	scanf("%f", &r);
	area = 3.14*r*r;
	perimeter = 2*3.14*r;
	printf ("Area of circle is %f and perimeter of circle is %f \n", area, perimeter);
	
	// For Triangle
	float x,y,z,h;
	printf("Enter the 1st side of triangle \n");
	scanf("%f", &x);
	printf("Enter the 2nd side of triangle \n");
	scanf("%f", &y);
	printf("Enter the 3rd side of triangle \n");
	scanf("%f", &z);
	printf("Enter the height of triangle \n");
	scanf("%f", &h);
	area = 0.5*y*h;
	perimeter = x+y+z;
	printf ("Area of triangle is %f and perimeter of triangle is %f \n", area, perimeter);
	
	return 0;
}
 
