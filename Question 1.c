#include <stdio.h>
#include <stdlib.h>
// C program calculate area or perimeter of circle according to choice of user whether area or circumference
#define pi 3.14; // value of Pi is constant in mathematic calcualation
float radius;// radius as global variable inorder to be accessed in every function 
void findArea()//function for area of circle to input caclution needed
{
	float area;
	printf(" Area of Circle calculation \n");
	area=radius*radius*pi; // Calculation of Area (Formular)
	printf("Area of Circle whose Radius is %.2f \n then Area is %.2f ",radius,area);
}
void findPerimeter()//function of Circumference of Circle where each calculation on circumference will be calculated
{
		float circumference;
		float diameter;
	printf(" Circumference of Circle calculation \n");
	diameter=radius*2; //Diameter Calculation (Formular)
	circumference=diameter*pi; // Circumference Calculation (Formular)
	printf("Circumference of Circle whose Diameter is %.2f \n then Circumference is %.2f ",diameter,circumference);
}
int main()
 {
 	int choice; // variable to store choice of user
 	printf("Enter radius of Circle: ");// Ask user to input radius
 	scanf("%f",&radius);//store in global variable radius declared on 5 lines
 	printf("Enter \n 1.Calculate Area of Circle \n 2.Circumference of Circle \n Choose: ");
 	scanf("%d",&choice);
 	switch(choice)
 	{
 		case 1: // If match return display calculation of findarea function
 			findArea();
 		break;
 		case 2: // If match return display calculation of findperimeter function
 		    findPerimeter();
 		break;
 		default: // If match return display invalid
 			printf(" Invalid Choice ");
	 }
	return 0;
}
