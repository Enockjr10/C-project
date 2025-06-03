
#include <stdio.h>

int main() {
    char name[50];
    long long id; 
    int i, num;
    float hrs, rate, salary=0,nsalary;

    printf("Enter number of Employees: "); 
    scanf("%d", &num);
for (i=0;i<num;i++)
	{ 
        printf("\n Enter Information For Employee %d:\n", i + 1); 

        printf("Name: "); 
        scanf("%s", name);
        printf("ID: ");
        scanf("%lld", &id);
        printf("Hours worked: ");
        scanf("%f", &hrs);
        printf("Hourly rate: ");
        scanf("%f", &rate);
		 	
            salary = hrs * rate;
			  printf("Total Salary for %s (ID %lld): %.2f Frw \n", name, id, salary); 
			nsalary+=salary;
        

       
    }
     printf("Total Salary for all employees: %.2f Frw \n", nsalary);

    return 0;
}
